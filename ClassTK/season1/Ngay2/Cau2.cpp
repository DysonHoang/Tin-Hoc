#include <iostream>
#define ll long long
using namespace std;
int tonguoc(ll x)
{
    int t = 0;
    for (int i = 1; i <= x / 2; i++)
        if (x % i == 0)
            t = t + i;
    return t;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (tonguoc(a) > a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
