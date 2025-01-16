// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll min1 = -1;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, res;
    cin >> n;
    for (int i = n / 5; i >= 0; i--)
    {
        ll remain = n - i * 5;
        if (remain % 3 == 0)
        {
            ll re3 = remain / 3;
            res = i + re3;
            break;
        }
    }
    cout << res;
}