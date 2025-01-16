// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    if (fopen("CAU2A.INP", "r"))
    {
        freopen("CAU2A.INP", "r", stdin);
        freopen("CAU2A.OUT", "w", stdout);
    }
    ll m, n;
    cin >> m >> n;
    ll s1 = (n - m % n) % n;
    cout << s1;
}