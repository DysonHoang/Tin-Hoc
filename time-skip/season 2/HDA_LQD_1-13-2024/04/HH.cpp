// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000005
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int n, a[Mx], d;
int tu(int n)
{
    int tong = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            tong += i + n / i;
            if (n == i * i)
                tong -= i;
        }
    }
    return tong - n;
}
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
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int x, i = 1; i <= n; i++)
    {
        cin >> x;
        x = tcs(x);
        if (tu(x) == x)
        {
            d++;
        }
    }
    cout << d;
}