// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll a, b;

int main()
{
    if (fopen("MFRA.INP", "r"))
    {
        freopen("MFRA.INP", "r", stdin);
        freopen("MFRA.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    ll gcd = __gcd(a, b);
    ll a1 = a / gcd;
    ll b1 = b / gcd;
    cout << a1 << " " << b1;
}
