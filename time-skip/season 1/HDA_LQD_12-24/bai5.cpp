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
    vector<int> a(n);

    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll max1 = 0, max2 = 0;

    for (ll i = 0; i < n; ++i)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }

    ll result = (max2 == 0) ? 0 : max1 % max2;
    cout << result;
}
