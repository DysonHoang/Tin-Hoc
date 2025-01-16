// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

string chuanhoaso(string number)
{
    string result = "";
    bool check = true;

    for (char ch : number)
    {
        if (check && ch == '0')
        {
            continue;
        }
        check = false;
        result += ch;
    }

    if (result.empty())
    {
        result = "0";
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    set<string> se;
    string number;
    int count = 0;

    for (char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            number += c;
        }
        else
        {
            if (!number.empty())
            {
                string s1 = chuanhoaso(number);
                if (se.insert(s1).second == 1)
                {
                    count++;
                }
                number.clear();
            }
        }
    }

    if (!number.empty())
    {
        string word = chuanhoaso(number);
        if (se.insert(word).second == 1)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}