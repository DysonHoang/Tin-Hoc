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
    ll a[5] = {0, 2, 4, 6, 8};
    ll b[5] = {1, 3, 5, 7, 9};
    ll l, r;
    cin >> l >> r;
    if (l % 2 == 0)
    {
        cout << (ll)((l - 1) / 2) * 10 + b[r - 1];
    }
    else
        cout << (ll)(l / 2) * 10 + a[r - 1];
}