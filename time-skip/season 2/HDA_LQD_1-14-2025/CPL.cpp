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
    ll n;
    cin >> n;
    ll root, sum = 0;
    ll count = 0;
    for (ll i = 1; i * i <= n; i += 2)
    {
        root = i * i;
        if (root <= n)
        {
            count++;
            sum += root;
        }
    }
    cout << count << "\n"
         << sum;
}