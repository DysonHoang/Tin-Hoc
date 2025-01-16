// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
const long long MOD = 1e9 + 7;
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

ll findNumberAt(ll idx)
{
    ll k = 1;
    while (k * (k + 1) / 2 < idx)
    {
        k++;
    }
    return k;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll A, B;
    cin >> A >> B;

    ll sum = 0;
    for (ll i = A; i <= B; i++)
    {
        sum = (sum + findNumberAt(i)) % MOD;
    }

    cout << sum << endl;
    return 0;
}
