// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int check(string num, int K)
{
    int smt = 0;
    for (char c : num)
        smt = (smt * 10 + (c - '0')) % K;
    return smt;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Cau5.INP", "r"))
    {
        freopen("Cau5.INP", "r", stdin);
        freopen("Cau5.OUT", "w", stdout);
    }
    ll n, k;
    cin >> n >> k;
    vector<string> a(n);

    map<ll, ll> mp;
    mp[0] = 1;
    ll t = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t = (t + check(a[i], k)) % k;
        ans += mp[t]++;
    }
    cout << ans;
}