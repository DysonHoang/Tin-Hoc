// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int a[100005];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    if (fopen("CAU3.INP", "r"))
    {
        freopen("CAU3.INP", "r", stdin);
        freopen("CAU3.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int dem = 0;
    for (auto m1 : mp)
    {
        while (m1.second >= 2)
        {
            dem++;
            m1.second -= 2;
        }
    }
    cout << dem;
}