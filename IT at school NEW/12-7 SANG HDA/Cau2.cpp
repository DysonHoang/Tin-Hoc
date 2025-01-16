// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = 0;
int min1 = INT_MAX;
ll cnt[1000005];
void sangdu()
{
    for (int i = 1; i <= 1e6; i++)
        for (int j = i; j <= 1e6; j += i)
            cnt[j]++;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangdu();
    ll n;
    cin >> n;
    ll res = 0;
    for (int i = 1; i < n; i++)
    {
        if (max1 < cnt[i])
        {
            max1 = cnt[i];
            res = i;
        }
    }
    cout << res;
}