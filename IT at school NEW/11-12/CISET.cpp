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
    if (fopen("CISET.INP", "r"))
    {
        freopen("CISET.INP", "r", stdin);
        freopen("CISET.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    vector<int> a(n + 1), d(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        map<int, int> mp;

        for (int j = 1; j < i; j++)
        {
            if (mp.find(a[i] - a[j]) != mp.end())
            {
                d[i] += mp[a[i] - a[j]];
            }

            for (int k = 1; k < j; j++)
            {
                int sum = a[j] + a[k];
                mp[sum]++;
            }
        }
    }

    for (int x = 1; x <= n; x++)
    {
        cout << d[x] << " ";
    }
}
