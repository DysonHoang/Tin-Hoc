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
    ll a, b;
    cin >> a >> b;
    ll l, r;
    if (a % 2 == 0)
        l = a;
    else
        l = a + 1;

    if (b % 2 == 0)
        r = b;
    else
        r = b - 1;
    ll ssh = (r - l) / 2 + 1;
    ll sum = (r + l) * ssh / 2;
    cout << sum;
}