// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
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
bool c1(ll x)
{
    while (x > 0)
    {
        if (!SNT[x])
            return 0;
        x /= 10;
    }
    return 1;
}
bool c2(ll x)
{
    if (SNT[x * 10 + 1] && SNT[x * 10 + 3] && SNT[x * 10 + 7] && SNT[x * 10 + 9])
        return 1;
    else
        return 0;
}
bool check(ll x)
{
    return (c1(x) && c2(x) && SNT[x]);
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll n;
    cin >> n;
    ll dem = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (check(x))
            dem++;
    }
    cout << dem;
}
