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
    ll n, k;
    cin >> n >> k;
    ll a[n + 2], d[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll left = 1, right = n;
    ll count = 0;
    while (left <= right)
    {
        if (a[left] + a[right] <= k)
        {
            count += (right - left);
            left++;
        }
        else
            right--;
    }
    cout << count;
}