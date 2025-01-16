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
    if (fopen("bai1b.INP", "r"))
    {
        freopen("bai1b.INP", "r", stdin);
        freopen("bai1b.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    double s = 0;
    ll smt;
    for (int i = 1; i <= n; i++)
    {
        smt = i * i;
        s += 1.0 / smt;
    }
    cout << setprecision(4) << fixed << s;
}