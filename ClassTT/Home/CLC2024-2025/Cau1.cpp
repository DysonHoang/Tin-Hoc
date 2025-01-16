#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll m;
    cin >> m;
    if (m % 2 != 0)
    {
        ll t1 = (m + 1) * ((m / 2) + 1) / 2;
        cout << t1;
    }
    else
    {
        ll t2 = (m + 2) * (m / 2) / 2;
        cout << t2;
    }
}