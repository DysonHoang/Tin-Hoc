#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool cp(ll x)
{
    ll tg = sqrt(x);
    return tg * tg == x;
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
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll n;
    cin >> n;
    for (ll i = n;; i++)
    {
        ll d = sqrt(i);
        if (SNT[d] && cp(i))
        {
            cout << i;
            break;
        }
    }
}
