// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll count3 = x / 3;
        ll count7 = x / 7;
        ll count21 = x / 21;
        ll res = count3 + count7 - count21;
        cout << res << "\n";
    }
}