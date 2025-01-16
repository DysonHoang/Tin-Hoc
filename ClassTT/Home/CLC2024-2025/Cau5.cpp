#include <bits/stdc++.h>
using namespace std;
long long n,k,x[10000000], y[10000000], f[10000000], sum[10000000];
long long dem,ans, vtr[1000000], tancung[1000000], maxx;
long long hieu[1000000];

int main() 
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        f[x[i]]++;
        if (f[x[i]] == 1)
        {
            vtr[x[i]] = i;
        }
        if (f[x[i]] >= 2)
        {
            tancung[x[i]] = i; 
        }
    }
    maxx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = vtr[x[i]]; j <= tancung[x[i]]; j++)
        {
            y[i] += x[j];
        }
        if (y[i] > maxx)
        {
            maxx = y[i];
        }
    }
    cout << maxx;
}