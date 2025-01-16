// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll n, k, a[10000005], t;
string s;
string tostring(ll n)
{
    string t = "";
    if (n == 0)
        return "0";
    while (n > 0)
    {
        char d = '0' + (n % 10);
        t = d + t;
        n /= 10;
    }

    return t;
}
ll res(ll n, ll k, ll a[])
{
    ll d = 0;
    char temp = '0' + k;
    for (int i = 1; i <= n; i++)
    {
        string st = tostring(a[i]);
        d += count(st.begin(), st.end(), temp);
    }
    return d;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cout << res(n, k, a) << '\n';
    }
}