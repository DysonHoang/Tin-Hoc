// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
int max1 = INT_MIN;
int min1 = INT_MAX;
using namespace std;
string s, man = "";
int n, i = 0;
bool check(string st)
{
    string tmp;
    while (tmp.size() < s.size())
    {
        tmp += st;
    }
    return (tmp == s);
}
int main()
{
    cin >> s;
    n = s.size();
    while (i < n)
    {
        man.push_back(s[i]);
        if (check(man))
        {
            cout << man;
            return 0;
        }
        i++;
    }
}