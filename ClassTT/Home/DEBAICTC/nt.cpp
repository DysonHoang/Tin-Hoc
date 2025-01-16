#include <bits/stdc++.h>
#define Mx 1000000005
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
bool ktnt(ll x)
{
    if (x < 2)
        return 0;
    for (ll i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll t1 = (a + b) % Mx;
        ll t2 = (b - a) % Mx;
        ll ans = (t1 * t2) % Mx;
        if (ktnt(ans))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }
}
