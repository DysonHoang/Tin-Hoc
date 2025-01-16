// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int max1 = INT_MIN;
int min1 = INT_MAX;
using namespace std;
int n, d[10000005], res;
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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int x, i = 1; i <= n; i++)
    {
        cin >> x;
        if (d[tcs(x)] != 0)
            res += d[tcs(x)];
        d[tcs(x)]++;
    }
    cout << res;
}