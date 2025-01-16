// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool SNT[Mx + 5];
ll d[Mx + 5];
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
}
bool check_tcs(int x)
{
    int t = 0;
    while (x > 0)
    {
        t += x % 10;
        x /= 10;
    }
    return t % 2 == 0;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();

    d[0] = 0;
    for (ll i = 1; i <= Mx; i++)
    {
        d[i] = d[i - 1];
        if (SNT[i] && check_tcs(i))
            d[i]++;
    }

    ll x, y;
    cin >> x >> y;
    cout << d[y] - d[x - 1];
}