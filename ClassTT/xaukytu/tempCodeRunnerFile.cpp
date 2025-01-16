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
    ll a, b, k;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        cout << "N0";
        return 0;
    }
    ll dem = 0;
    for (int i = b; i >= a; i--)
    {
        if (i % k == 0)
            dem++;
    }
    if (dem % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}