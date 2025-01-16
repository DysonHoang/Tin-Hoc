// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define kbc                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define MOD 100000007
#define MAXX 100005
#define int long long
using namespace std;
int n, a[MAXX], d = 0;
bool snt[1000005];
void make_snt()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= 1e6; i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e6; j += i)
                snt[j] = 1;
}
int ktcp(int n)
{
    int k = sqrt(n);
    return k * k == n;
}
main()
{
    kbc
    make_snt();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        int x = sqrt(a[i]);
        if (ktcp(a[i]) && snt[x] == 0)
            d++;
    }
    cout << d;
}