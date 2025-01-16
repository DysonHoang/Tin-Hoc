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

    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll summ = 0;
    ll max1 = a[1];

    for (int i = 2; i <= n; i++)
    {
        summ = max(summ, a[i] + max1);
        max1 = max(max1, a[i - 1]);
    }

    cout << summ;
}
