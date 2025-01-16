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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            mp[a[i]]++;
            max1 = max(max1, a[i]);
            min1 = min(min1, a[i]);
        }

        cout << max1 << endl;
        cout << min1 << endl;
    }
}
