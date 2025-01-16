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
    ll a, b, x;
    cin >> a >> b >> x;
    ll start;
    if (a % x == 0)
    {
        start = a;
    }
    else
        start = (a / x + 1) * x;
    ll end = (b / x) * x;
    ll count = 0;
    if (start <= end)
    {
        count = (end - start) / x + 1;
    }
    cout << count;
}
