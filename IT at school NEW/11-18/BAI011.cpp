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
bool bt(int x)
{
    int du;
    if (x < 11)
        return 0;
    while (x > 0)
    {
        du = x % 10;
        x = x / 10;
        if (x % 10 >= du)
            return 0;
    }
    return 1;
}
bool check(ll n)
{
    return SNT[n] && bt(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll x, dem = 0;
    sangnt();
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (check(x))
            dem++;
    }
    cout << dem;
}
