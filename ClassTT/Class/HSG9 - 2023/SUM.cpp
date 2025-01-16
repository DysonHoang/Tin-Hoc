// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll max1 = LLONG_MIN;
ll greatest_number(ll num)
{
    while (num > 0)
    {
        ll idx = num % 10;
        if (idx > max1)
            max1 = idx;
        num /= 10;
    }.
    return max1;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll ans = n * (n + 1) * (n + 2) * (n + 3) / 4;
    ll res = greatest_number(ans);
    cout << ans << "\n"
         << res;
}