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
    ll n,m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll res = 0;
    sort(b, b + m);
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        res += a[i] * b[i];
    }
    cout << res;
}