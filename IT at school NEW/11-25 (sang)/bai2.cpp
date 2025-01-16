
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ktnt(ll x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll count = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (ktnt(i))
                count++;
            if (i != n / i && ktnt(n / i))
            {
                count++;
            }
        }
    }
    cout << count;
}