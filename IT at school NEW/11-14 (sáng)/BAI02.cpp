// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
using namespace std;
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
    if (fopen("BAI02.INP", "r"))
    {
        freopen("BAI02.INP", "r", stdin);
        freopen("BAI02.OUT", "w", stdout);
    }
    int a, b;
    cin >> a >> b;
    sangnt();
    for (int i = a; i <= b; i++)
    {
        if (SNT[sodao(i)])
            cout << i << "\n";
    }
}
