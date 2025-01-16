// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll max1 = LLONG_MIN;
ll tcs(ll n)
{
    if (n == 0)
        return n % 10;
    return tcs(n / 10) + (n % 10);
}
bool SNT[Mx + 5];
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll n;
    cin >> n;
    ll x;
    while (n--)
    {
        cin >> x;
        if (SNT[x])
        {
            ll idx = tcs(x);
            max1 = max(max1, idx);
        }
    }
    cout << max1;
}