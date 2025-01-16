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
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI01.INP", "r"))
    {
        freopen("BAI01.INP", "r", stdin);
        freopen("BAI01.OUT", "w", stdout);
    }
    ll n, a, b, c, dem = 0; 
    cin >> n >> a >> b >> c;
    ll b1 = lcm(a, b), b2 = lcm(b, c), b3 = lcm(a, c);
    for (int i = 1; i <= n; i++)
    {
        if (i % b1 == 0 || i % b2 == 0 || i % b3 == 0)
            dem++;
    }
    cout << dem;
}