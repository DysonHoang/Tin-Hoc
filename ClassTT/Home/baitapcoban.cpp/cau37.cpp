// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 3 == 0)
        {
            dem1++;
        }
        if (a[i] > 10)
            dem2++;
        if (a[i] >= 10 && a[i] <= 500)
            dem3++;
    }
    cout << dem1 << " " << dem2 << " " << dem3 << " ";
    sort(a + 1, a + 1 + n, greater<int>());
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == a[1])
            dem4++;
        else
        {
            cout << dem4;
            return 0;
        }
    }
}