// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll a, max1 = LLONG_MIN, curr_sum = 0;

    for (ll i = 1; i <= n; i++)
    {
        cin >> a;
        curr_sum = max(a, curr_sum + a);
        max1 = max(max1, curr_sum);
    }
    cout << max1;
}

