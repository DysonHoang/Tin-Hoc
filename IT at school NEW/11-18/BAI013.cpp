// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool sodx(int x)
{
    int dao = 0, du, x1 = x;
    while (x > 0)
    {
        du = x % 10;
        dao = dao * 10 + du;
        x = x / 10;
    }
    return dao == x1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll l, r;
    cin >> l >> r;
    ll count = 0;
    for (int i = l; i <= r; i++)
    {
        if (sodx(i))
            count++;
    }
    cout << count;
}
