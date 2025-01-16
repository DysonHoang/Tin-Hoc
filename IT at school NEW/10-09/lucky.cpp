// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
vector<ll> luutru;
void generate(ll n)
{
    if (n > 1e12)
        return;
    if (n != 0)
        luutru.push_back(n);

    generate(n * 10 + 6);
    generate(n * 10 + 8);
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("lucky.INP", "r"))
    {
        freopen("lucky.INP", "r", stdin);
        freopen("lucky.OUT", "w", stdout);
    }
    generate(0);
    ll a, b;
    cin >> a >> b;
    sort(luutru.begin(), luutru.end());
    auto index1 = lower_bound(luutru.begin(), luutru.end(), a);
    auto index2 = upper_bound(luutru.begin(), luutru.end(), b);

    cout << index2 - index1;
}
