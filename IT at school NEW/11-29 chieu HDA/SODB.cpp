// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

bool check(ll x)
{
    ll odd = 0, even = 0;
    while (x > 0)
    {
        ll idx = x % 10;
        if (idx % 2 == 0)
            even++;
        else
            odd++;
        x /= 10;
    }
    return odd != even;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll x;
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (ktnt(x) && check(x))
            count++;
    }
    cout<<count;
}