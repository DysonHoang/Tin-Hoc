// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 1000000
#define ll long long
using namespace std;

ll a[Mx + 5];
bool SNT[Mx + 5];

void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    sangnt();
    ll n;
    cin >> n;
    ll count = 0;
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (SNT[a[i]])
            count++;
        mp[a[i]]++;
    }
    cout << count << "\n";

    ll idx = 1;
    while (mp[idx])
    {
        idx++;
    }
    cout << idx;
}