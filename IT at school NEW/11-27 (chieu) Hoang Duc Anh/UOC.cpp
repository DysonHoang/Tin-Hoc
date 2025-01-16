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
bool cp(ll x)
{
    ll d = sqrt(x);
    return d * d == x;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll n, x;
    cin >> n;
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ll d = sqrt(x);
        if (SNT[d] && cp(x))
            count++;
    }
    cout << count;
}