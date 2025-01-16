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
    ll n, a, b, c;
    ll dem = 0;
    cin >> n >> a >> b >> c;
    for (int i = 1; i <= n; i++)
    {
        if ((a % i == 0 && b % i == 0 && c % i != 0) || (a % i == 0 && b % i != 0 && c % i == 0) || (a % i != 0 && b % i == 0 && c % i == 0))
            dem++;
    }
    cout << dem;
}
