#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int sodao(int x)
{
    int dao = 0, du;
    while (x > 0)
    {
        du = x % 10;
        dao = dao * 10 + du;
        x = x / 10;
    }
    return dao;
}
bitset<Mx + 5> SNT;
void sangnt()
{
    SNT.set();
    SNT[0] = SNT[1] = 0;
    for (int i = 2; i * i <= Mx; i++)
    {
        if (SNT[i])
        {
            for (int j = i * i; j <= Mx; j += i)
            {
                SNT[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI02.INP", "r"))
    {
        freopen("BAI02.INP", "r", stdin);
        freopen("BAI02.OUT", "w", stdout);
    }
    sangnt();
    vector<int> c(Mx + 2, 0);
    for (int i = 2; i <= Mx; i++)
    {
        c[i] = c[i - 1];
        int dao = sodao(i);
        if (SNT[i] && SNT[dao])
        {
            c[i]++;
        }
    }

    ll a, b;
    cin >> a >> b;
    ll ans = c[b] - c[a - 1];
    cout << ans;

    return 0;
}
