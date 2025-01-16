// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll lcm(ll a, ll b)
{
    return a * (b / __gcd(a, b));
}
int main()
{
    if (fopen("CAU1.INP", "r"))
    {
        freopen("CAU1.INP", "r", stdin);
        freopen("CAU1.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;
    ll c1 = n / a;
    ll c2 = n / b;
    ll c3 = n / lcm(a, b);
    cout << c1 + c2 - c3;
}