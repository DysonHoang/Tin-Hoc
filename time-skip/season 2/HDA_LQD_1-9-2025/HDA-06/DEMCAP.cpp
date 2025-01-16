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
    ll cntEven = 0, cntOdd = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (num % 2 == 0)
        {
            cntEven++;
        }
        else
        {
            cntOdd++;
        }
    }
    ll res = (1LL * cntEven * (cntEven - 1)) / 2 + (1LL * cntOdd * (cntOdd - 1)) / 2;

    cout << res;
}
