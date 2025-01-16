// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int t, n;
int tcs(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int tsnt(int n)
{
    int d = 0;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            d = d + tcs(i);
            n = n / i;
        }
    }
    if (n > 1)
        d += tcs(n);
    return d;
}
bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
bool check(int n)
{
    if (tsnt(n) == tcs(n) && ktnt(n) == 0)
        return 1;
    else
        return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << check(n) << '\n';
    }
    return 0;
}
