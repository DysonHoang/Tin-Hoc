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
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll maxSum = 0;

    for (ll l = 0; l < n; ++l)
    {
        ll sum = 0;
        for (ll r = l; r < n; ++r)
        {
            sum += a[r];
            if (a[l] == a[r])
            { 
                maxSum = max(maxSum, sum);
            }
        }
    }

    cout << maxSum;
}
