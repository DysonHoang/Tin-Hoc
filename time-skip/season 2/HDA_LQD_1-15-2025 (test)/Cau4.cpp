// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <iostream>
#define ll long long
using namespace std;
ll n, k;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    ll i = 0;
    ll count = 0;
    ll cursum = 0;
    for (ll j = 0; j < n; ++j)
    {
        cursum += a[j];

        while (cursum > k)
        {
            cursum -= a[i];
            ++i;
        }

        count += (j - i + 1);
    }

    cout << count;
}
