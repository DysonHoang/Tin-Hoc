// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int n, a[10005];
ll ans;
map<int, int> dem;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[2 * a[i]]++;
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            dem[2 * a[i]]--;
            dem[2 * a[j]]--;
            ans += dem[a[i] + a[j]];
            dem[2 * a[i]]++;
            dem[2 * a[j]]++;
        }
    cout << ans;
}