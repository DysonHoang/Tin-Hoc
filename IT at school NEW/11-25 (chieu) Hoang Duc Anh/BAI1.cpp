// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

bool cp(ll x)
{
    ll d = sqrt(x);
    return d * d == x;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (cp(x))
        {
            cout << "LE ";
        }
        else
            cout << "CHAN ";
    }
}