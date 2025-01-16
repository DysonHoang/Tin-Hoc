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
    ll p, q, r, s, u, v;
    cin >> p >> q >> r >> s >> u >> v;
    ll A = 0, B = 0, C = 0;
    if (p > q)
    {
        A += 3;
    }
    else if (p < q)
    {
        B += 3;
    }
    else
    {
        A++;
        B++;
    }

    if (r > s)
    {
        A += 3;
    }
    else if (r < s)
    {
        C += 3;
    }
    else
    {
        A++;
        C++;
    }
    if (u > v)
    {
        B += 3;
    }
    else if (u < v)
    {
        C += 3;
    }
    else
    {
        B++;
        C++;
    }
    cout << A << " " << B << " " << C;
}
