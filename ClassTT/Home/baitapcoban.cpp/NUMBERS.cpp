// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

using namespace std;

int tcs(long long n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int tgt1(long long n)
{
    ll sum = 0;
    map<long long, int> mp;

    while (n % 2 == 0)
    {
        mp[2]++;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 2)
    {
        mp[n]++;
    }

    for (const auto &m1 : mp)
    {
        sum += m1.first * m1.second;
    }

    return sum;
}

bool check(long long n)
{
    return tcs(n) == tgt1(n);
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (check(n))
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }
}
