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
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll s1 = a % b;
        ll s2 = a / b;
        ll t = s1 * c + s2 * d;
        ll ans = min(t, a * c);
        cout << ans << "\n";
    }
}