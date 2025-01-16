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
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    ll a[1000000];
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << a[k + 1];

}