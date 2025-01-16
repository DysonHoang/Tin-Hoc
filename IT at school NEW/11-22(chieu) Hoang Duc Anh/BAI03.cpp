#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

bool SNT[Mx + 5];
ll d[3000005];   

void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
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

ll tcs(ll x)
{
    ll t = 0;
    while (x > 0)
    {
        t += x % 10;
        x /= 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sangnt(); 

    d[0] = 0;
    for (int i = 1; i <= 3000000; i++)
    {
        d[i] = d[i - 1];
        if (SNT[i] && tcs(i) % 5 == 0)
        {
            d[i]++;
        }
    }

    ll t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        cout << d[r] - d[l - 1] << "\n";
    }

    return 0;
}
