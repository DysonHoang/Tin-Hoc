// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll  dem[100005];
void phantich(ll n)
{
    ll tich = 1;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 1)
        {
            tich = tich * i;
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        tich *= n;
    dem[tich]++;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n,a;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> a;
        phantich(a);
    }

    ll res = 0;
    for (int i = 1; i <= 1e6; i++)
    {
        res += res + dem[i] * (dem[i] - 1) / 2;
    }
    cout << res;
}