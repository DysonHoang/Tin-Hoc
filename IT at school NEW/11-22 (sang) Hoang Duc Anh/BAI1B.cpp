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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll m, n;
    cin >> m >> n;
    ll s = 0, idx = 1;
    for (int i = 1; i <= n; i++)
    {
        s += idx;
        idx *= 2;
    }
    if (m >= s)
        cout << "1";
    else
        cout << "2";
}
