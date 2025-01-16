#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool tnum(ll x)
{
    int count = 0;

    for (int i = 1; i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            if (i == x / i)
            {
                ++count;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count == 3;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        if (tnum(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}