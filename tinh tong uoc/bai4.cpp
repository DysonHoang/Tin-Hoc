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
    string s, n1;
    cin >> s;
    /// RYW
    ll n = s.size();
    ll cRYW = 0, cRWY = 0, cYRW = 0, cYWR = 0, cWRY = 0, cWYR = 0;
    vector<ll> a(100000);
    for (int i = 0; i < s.size() - 3; i++)
    {
        n1 = s.substr(i, 3);
        if (n1 == "RYW")
        {
            cRYW++;
        }
        if (n1 == "RWY")
        {
            cRWY++;
        }
        if (n1 == "YWR")
        {
            cYWR++;
        }
        if (n1 == "YRW")
        {
            cYRW++;
        }
        if (n1 == "WYR")
        {
            cWYR++;
        }
        if (n1 == "WRY")
        {
            cWRY++;
        }
    }

    ll res = cRYW + cRWY + cYRW + cYWR + cWRY + cWYR;
    cout << n - res;
}