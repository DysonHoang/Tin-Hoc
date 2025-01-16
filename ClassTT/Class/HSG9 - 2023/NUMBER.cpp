// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll d[100005] = {0};
ll cnt[100005] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 100000; ++i)
    {
        for (int j = i; j <= 100000; j += i)
        {
            d[j]++;
        }
    }

    for (int i = 1; i <= 100000; ++i)
    {
        cnt[i] = cnt[i - 1];
        if (i % d[i] == 0)
        {
            cnt[i]++;
        }
    }
    ll n;
    cin >> n;
    cout << cnt[n] << "\n";
}
