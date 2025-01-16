#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;

bool SNT[Mx + 5];

void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = true;
    for (int i = 2; i * i <= Mx; i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    sangnt();

    ll count = 0;

    for (ll u = 2; u < n; ++u)
    {
        ll v = n - u;
        if (u < v && SNT[u] && SNT[v])
        {
            count++;
        }
    }
    cout << count << endl;
    for (ll u = 2; u < n; ++u)
    {
        ll v = n - u;
        if (u < v && SNT[u] && SNT[v])
        {
            cout << u << " " << v << endl;
        }
    }
    return 0;
}