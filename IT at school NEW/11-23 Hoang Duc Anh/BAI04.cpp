// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll max1 = LLONG_MIN;
ll tonum(string s)
{
    ll sum = 0;
    for (char d : s)
    {
        sum = sum * 10 + (d - '0');
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    ll idx = 0;
    string word = "";
    for (char d : s)
    {
        if (d >= '0' && d <= '9')
            word += d;
        else
        {
            if (!word.empty())
            {
                max1 = max(max1, tonum(word));
                word = "";
            }
        }
    }
    if (!word.empty())
    {
        max1 = max(max1, tonum(word));
    }
    cout << max1;
}