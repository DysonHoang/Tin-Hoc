// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

bool SNT[Mx + 5];
vector<int  > primes;
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i * i <= Mx; i++)
    {
        if (SNT[i])
        {
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
        }
    }
    for (int i = 2; i <= Mx; i++)
    {
        if (SNT[i])
            primes.push_back(i);
    }
}
ll check(ll n)
{
    ll product = 1;
    for (int p : primes)
    {
        if (p > n)
            break;
        if (n % p == 0)
            product *= p;
    }
    return product;
}

int main()
{
    sangnt();
    int m;
    cin >> m;
    int maxS = 0, result = 0;

    for (ll i = 2; i <= m; ++i)
    {
        int S = check(i);
        if (S > maxS)
        {
            maxS = S;
            result = i;
        }
    }

    cout << result << endl;
    return 0;
}
