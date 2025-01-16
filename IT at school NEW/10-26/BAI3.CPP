// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if(fopen("BAI3.INP","r"))
       {
        freopen("BAI3.INP", "r", stdin);
        freopen("BAI3.OUT", "w", stdout);
       }
    ll p;
    string s;
    cin >> p >> s;
    bool check[10] = {0};
    for (char digit : s)
    {
        check[digit - '0'] = 1;
    }
    for (ll i = p; i > 0; i--)
    {
        bool ck = 1;
        string s1 = to_string(i);
        for (char digit : s1)
        {
            if (check[digit - '0'])
            {
                ck = 0;
                break;
            }
        }
        if (ck)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}