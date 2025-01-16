// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 5000000
#define ll long long
#define maxN 2000000
using namespace std;

ll n, res = 0, k, a, sum = 0, r;
unordered_map<ll, ll> cnt;
int main()
{
    scanf("%d%lld", &n, &k);
    cnt.reserve(maxN);
    cnt[0] = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        sum += a;
        r = (sum % k + k) % k;
        res += cnt[r];
        cnt[r]++;
    }
    printf("%d", res);
}