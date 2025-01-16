// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, mu, m;
    cin >> mu;
    ll stc = n % 10;
    ll f[12];
    int res = 0;
    if (stc == 0)
    {
        cout << "0";
        return 0;
    }
    if (stc == 1)
    {
        res = 1;
        return 0;
    }
    if (stc == 2)
    {
        f[0] = 6, f[1] = 2, f[2] = 4, f[3] = 8;
        m = n % 4;
        cout << f[m];
        return 0;
    }
    if (stc == 3)
    {
        f[0] = 1, f[1] = 3, f[2] = 9, f[3] = 7;
        m = n % 4;
        cout << f[m];
        return 0;
    }
    if (stc == 4)
    {
        f[0] = 6, f[1] = 4;
        m = n % 2;
        cout << f[m];
        return 0;
    }
    if (stc == 5)
    {
        cout << "5";
        return 0;
    }
    if (stc == 6)
    {
        cout << "6";
        return 0;
    }
    if (stc == 7)
    {
        f[0] = 1, f[1] = 7, f[2] = 9, f[3] = 3;
        m = n % 4;
        cout << f[m];
        return 0;
    }
    if (stc == 8)
    {
        f[0] = 6, f[1] = 8, f[2] = 4, f[3] = 2;
        m = n % 4;
        cout << f[m];
        return 0;
    }
    if (stc == 9)
    {
        f[0] = 1, f[1] = 9;
        m = n % 2;
        cout << f[m];
        return 0;
    }
}
