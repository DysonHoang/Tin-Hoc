// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

ll n, ans;
vector<int> prime = {2, 3, 5, 7, 13, 17, 19, 31, 47};
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < prime.size(); i++)
    {
        ll s = pow(2, prime[i]);
        s -= 1;
        if (s > n)
        {
            cout << ans;
            exit(0);
        }
        ans = s;
    }
}