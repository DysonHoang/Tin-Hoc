// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
pair<int, int> a[Mx];
ll m, n;
void nhap()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n);
}
void tinh()
{
    ll res = 0, i = 0;
    while (m > 0 && i <= n)
    {
        i++;
        if (a[i].second >= m)
        {
            res += m * a[i].first;
            m = 0;
        }
        else
        {
            res += a[i].first * a[i].second;
            m -= a[i].second;
        }
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    nhap();
    tinh();
}