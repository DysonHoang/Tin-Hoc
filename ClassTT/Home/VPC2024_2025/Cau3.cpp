#include <bits/stdc++.h>
#include <map>

#define ll long long
using namespace std;
int a[10000000], b[10000000], k[1000000];

int dem(map<ll, ll> &count_map, int k)
{
    int count = 0;
    for (auto &entry : count_map)
    {
        if (entry.second >= k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    map<ll, ll> mpA;
    map<ll, ll> mpB;

    ll n, Q;
    cin >> n >> Q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mpA[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        mpB[b[i]]++;
    }
        for (int i = 1; i <= Q; i++)
            cin >> k[i];

        for (int i = 1; i <= Q; i++){
            ll x = dem(mpA, k[i]);
            ll y = dem(mpB, k[i]);
            cout<<x<<" "<<y<<endl;
        }
}