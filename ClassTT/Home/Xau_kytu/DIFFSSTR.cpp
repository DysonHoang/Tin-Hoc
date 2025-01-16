#include <iostream>
#include <stack>
#include <string>
using namespace std;
string kiemTraNgoac(const string &s)
{
    stack<char> ngoac;
    for (char c : s)
    {
        if (c == '(')
        {
            ngoac.push(c);
        }
        else if (c == ')')
        {
            if (ngoac.empty())
            {
                return "KHONG DUNG";
            }
            ngoac.pop();
        }
        else
        {
            return "KHONG HOP LE";
        }
    }
    if (ngoac.empty())
    {
        return "DUNG";
    }
    else
    {
        return "KHONG DUNG";
    }
}

int main()
{
   string s;
   cin >> s;

    string ketQua = kiemTraNgoac(s);
    cout << ketQua << std::endl;

    return 0;
}