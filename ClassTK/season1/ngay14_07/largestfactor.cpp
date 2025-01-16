#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        long long maxPrime;
        while (n % 2 == 0)
        {
            maxPrime = 2;
            n /= 2;
        }
        for (long long i = 3; i * i <= n; i += 2)
        {
            while (n % i == 0)
            {
                maxPrime = i;
                n /= i;
            }
        }
        if (n > 2)
        {
            maxPrime = n;
        }
        cout << maxPrime<<"\n";
    }
}