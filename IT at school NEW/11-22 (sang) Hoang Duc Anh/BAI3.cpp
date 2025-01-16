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
    ll b;
    cin >> n >> b;
                
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    ll sum = 0;
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        count++;
        if (sum >= b)
        {
            cout << count << "\n";
            return 0;
        }
    }
    cout << "0";
}
