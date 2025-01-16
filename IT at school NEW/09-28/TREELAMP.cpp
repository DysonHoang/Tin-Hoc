// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("TREELAMP.INP", "r"))
    {
        freopen("TREELAMP.INP", "r", stdin);
        freopen("TREELAMP.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> lis;

    for (int i = 0; i < n; ++i)
    {
        int sm = a[i];
        auto it = lower_bound(lis.begin(), lis.end(), sm);
        if (it == lis.end())
        {
            lis.push_back(sm);
        }
        else
        {
            *it = sm;
        }
    }

    cout << lis.size();
}
