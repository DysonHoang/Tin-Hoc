// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
bool isBeautiful[Mx + 1];
ll prefix[Mx + 1];

bool isPalindrome(ll n)
{
    ll rev = 0, x = n;
    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev == n;
}

ll countDistinctPrimes(ll n)
{
    ll count = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        count++;
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 

    for (ll i = 1; i <= Mx; i++)
    {
        if (isPalindrome(i) && countDistinctPrimes(i) >= 3)
        {
            isBeautiful[i] = true;
        }
        prefix[i] = prefix[i - 1] + isBeautiful[i];
    }

    ll a, b;
    cin >> a >> b;
    cout << prefix[b] - prefix[a - 1] << "\n";

    return 0;
}
