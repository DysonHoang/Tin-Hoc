// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
#define m 100006
using namespace std;
ll n, a[m], t, tam, res;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] + a[i - 1];
    }
    res = a[0] * (a[n - 1] - a[0]);
    res = res % z;
    for (int i = 1; i < n; i++)
    {
        t = a[i] - a[i - 1];
        res = res + (t * (a[n - 1] - a[i]));
        res = res % z;
    }
    cout << res;
    return 0;
}