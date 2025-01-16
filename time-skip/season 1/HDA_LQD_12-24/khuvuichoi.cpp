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
    ll n, k;
    ll dem = 0;
    ll ans = 0;
    cin >> n >> k;
    for (int i = n; i < k; i++)
    {
        dem++;
        if (i < 12 and dem <= 4)
        {   
            ans += 6;
        }
        else if (i >= 12 and dem <= 4)
        {
            ans += 10;
        }
        else if (i < 12 and dem > 4)
        {
            ans += 3;
        }
        else if (i >= 12 and dem > 4)
        {
            ans += 5;
        }
    }
    cout << ans;
}