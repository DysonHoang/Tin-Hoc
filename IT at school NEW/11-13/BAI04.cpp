// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
long a[10005];
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
bool bt(int x)
{
    int du;
    if (x < 11)
        return 0;
    while (x > 0)
    {
        du = x % 10;
        x = x / 10;
        if (x % 10 >= du)
            return 0;
    }
    return 1;
}

int main()
{
    if (fopen("BAI04.INP", "r"))
    {
        freopen("BAI04.INP", "r", stdin);
        freopen("BAI04.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (SNT[a[i]] && bt(a[i]))
        {
            count++;
        }
    }
    cout << count;
}
