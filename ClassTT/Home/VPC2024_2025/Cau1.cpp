#include <bits/stdc++.h>
#define ll long long
using namespace std;
void timvitri(ll a, ll n, ll &x, ll &y)
{
    ll vitri = n % (4 * a);
    if (vitri <= a)
    {
        x = vitri;
        y = 0;
    }
    else if (vitri <= (2 * a))
    {
        x = a;
        y = vitri - a;
    }
    else if (vitri <= (3 * a))
    {
        x = a - (vitri - 2 * a);
        y = a;
    }
    else
    {
        x = 0;
        y = a - (vitri - 3 * a);
    }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll a, n;
    ll x, y;
    cin >> a >> n;
    timvitri(a, n, x, y);
    cout << x << " " << y;
}