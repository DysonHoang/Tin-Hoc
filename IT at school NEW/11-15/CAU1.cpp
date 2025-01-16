// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define mod 1000000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n,ans;
    cin >> n;
    cin >> n;
    ans = n;
    if (n % 3 == 0)
    {
        ans /= 3;
        ans = (ans * (n + 1)) % mod;
        ans = (ans * (n + 2)) % mod;
    }
    else if ((n + 1) % 3 == 0)
    {
        ans = ((ans * (n + 1)) / 3) % mod;
        ans = (ans * (n + 2)) % mod;
    }
    else if ((n + 2) % 3 == 0)
    {
        ans = ((ans * (n + 2)) / 3) % mod;
        ans = (ans * (n + 1)) % mod;
    }
    cout << ans;
}