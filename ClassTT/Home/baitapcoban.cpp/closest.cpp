// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b, x;
        cin >> a >> b >> x;

        ll somu;

        if (b == 0)
        {
            somu = 1;
        }
        else if (b > 0)
        {
            somu = pow(a, b);
        }
        else
        {
            somu = 0;
        }

        ll lower = (somu / x) * x;
        ll upper = lower + x;

        if (abs(somu - lower) <= abs(somu - upper))
        {
            cout << lower << "\n";
        }
        else
        {
            cout << upper << "\n";
        }
    }

    return 0;
}
