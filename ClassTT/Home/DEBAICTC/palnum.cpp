#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sodx(int x)
{
    int dao = 0, du, x1 = x;
    while (x > 0)
    {
        du = x % 10;
        dao = dao * 10 + du;
        x = x / 10;
    }
    return dao == x1;
}
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll ans = n;

    while (!(sodx(ans)))
    {
        ans = ans + sodao(ans);
    }
    cout << ans;
    return 0;
}
