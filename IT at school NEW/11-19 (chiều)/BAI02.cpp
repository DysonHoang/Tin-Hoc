// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
#define Mx 10000000
using namespace std;
bool SNT[Mx + 5];
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
    ll l, r;
    cin >> l >> r;
    ll dem = 0;
    for (ll i = l; i <= r; i++)
    {
        if (SNT[i] && SNT[sodao(i)])
            dem++;
    }
    cout << dem << "\n";
}
