#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    int min1 = INT_MAX;
    for (int i = 1; i <= n - k + 1; i++)
    {
        min1 = min(min1, a[i + k - 1] - a[i]);
    }
}