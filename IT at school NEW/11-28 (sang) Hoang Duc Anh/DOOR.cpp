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
    
    int n;
    cin >> n;

    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0\n";
            continue;
        }

        ll ans = LLONG_MAX;
        if (a > b)
        {
            ans = a - b;
        }
        for (ll i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                ll n = (b + i - 1) / i;
                ans = min(ans, i * n - b);

                n = (b + (a / i) - 1) / (a / i);
                ans = min(ans, (a / i) * n - b);
            }
        }

        cout << ans << "\n";
    }
}
