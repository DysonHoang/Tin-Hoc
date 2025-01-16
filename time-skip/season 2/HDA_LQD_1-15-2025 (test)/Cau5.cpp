// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll left = 0, right = 0;
    ll cursum = 0;
    ll max_length = 0;

    while (right < n)
    {
        cursum += a[right];

        while (cursum > k && left <= right)
        {
            cursum -= a[left];
            left++;
        }

        max_length = max(max_length, right - left + 1);
        right++;
    }

    ll res = n - max_length;
    cout << res;
}