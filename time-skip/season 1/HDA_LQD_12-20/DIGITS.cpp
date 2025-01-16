// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
long long tcs(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}
long long backtrack(long long n)
{
    if (n < 10)
        return n;
    return backtrack(tcs(n));
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t, n;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        cout << backtrack(x) << "\n";
    }
}