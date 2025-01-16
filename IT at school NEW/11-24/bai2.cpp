// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll factorize(int n)
{
    ll dem = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            dem++;
            n /= i;
        }
    }
    if (n > 1)
    {
        dem++;
    }
    return dem;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += factorize(i);
    }
    cout << count;
}