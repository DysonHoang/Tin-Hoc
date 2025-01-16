#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int max1 = 0, ans = 0;
    for (auto &m1 : mp)
    {
        if (m1.second > max1 || (m1.second == max1 && m1.first > ans))
        {
            max1 = m1.second;
            ans = m1.first;
        }
    }

    cout << ans << endl;
    return 0;
}
