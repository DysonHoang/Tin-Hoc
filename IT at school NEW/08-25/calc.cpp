// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("calc.INP", "r"))
    {
        freopen("calc.INP", "r", stdin);
        freopen("calc.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << -(n + 1) / 2;
}