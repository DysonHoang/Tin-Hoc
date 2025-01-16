// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll l[4] = {a, b, c, d};
    sort(l, l + 4);

    int max1 = l[0], max2 = l[3];
    if (l[0] == l[1])
    {
        max1 = l[0];
    }
    if (l[2] == l[3])
    {
        max2 = l[2];
    }

    ll max_area = max1 * max2;
    cout << max_area;
}
