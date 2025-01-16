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
    if (fopen("SCP.INP", "r"))
    {
        freopen("SCP.INP", "r", stdin);
        freopen("SCP.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        int count = 0;
        for (long long i = ceil(sqrt(l)); i <= floor(sqrt(r)); ++i)
        {
            count++;
        }
        cout << count << "\n";
    }
}