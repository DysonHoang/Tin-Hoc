// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int tcs(int x)
{
    int t = 0, du;
    while (x > 0)
    {
        du = x % 10;
        t = t + du;
        x = x / 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    ll ans = 0;

    int c[101] = {0};
    for (int i = a; i <= b; i++)
    {
        int k = tcs(i);
        if (c[k] == 0)
            c[k] = i;
        else
            ans = max(ans, (long long)(i - c[k]));
    }
    cout << ans;
}
