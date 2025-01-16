// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool SNT[Mx + 5];
ll l, r;
ll d[10000002] = {0};
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
    for (int i = 1; i <= 10000000; i++)
    {
        d[i] = d[i - 1];
        if (SNT[i])
        {
            d[i]++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    cin >> l >> r;
    ll ans = d[r] - d[l - 1];
    cout<<ans;
}
