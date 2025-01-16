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
ll tcs(ll x)
{
    ll t = 0, du;
    while (x > 0)
    {
        du = x % 10;
        t = t + du;
        x = x / 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll l, r;
    cin >> l>> r;
    for (int i = l; i <= r; i++)
    {
        if (SNT[i] && SNT[tcs(i)])
            cout << i << " ";
    }
}
