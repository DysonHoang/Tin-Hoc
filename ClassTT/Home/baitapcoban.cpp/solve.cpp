#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tcs(int x)
{
    int t = 0;
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
    ll n;
    cin >> n;

    int index = -1;
    for (ll x = sqrt(n) - 80; x <= sqrt(n); ++x)
    {
        if (x * (x + tcs(x)) == n)
        {
            index = x;
            break;
        }
    }
    if (index < 1)
        cout << "-1";
    else
        cout << index << endl;
    return 0;
}
