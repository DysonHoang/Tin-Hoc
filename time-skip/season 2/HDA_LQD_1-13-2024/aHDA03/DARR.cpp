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
    int n, a[100005], res = INT_MIN;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < res)
            break;
        for (int k = 2; k <= a[n] / a[i] + 1; k++)
        {
            int idx = lower_bound(a + i, a + n + 1, a[i] * k) - a - 1;
            res = max(res, a[idx] % a[i]);
        }
    }
    cout << res;
}