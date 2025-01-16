// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 1000000007
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll giaithua[100002];
    giaithua[0] = 1;
    for (ll i = 1; i <= 100000; i++)
    {
        giaithua[i] = (giaithua[i - 1] * i) % Mx;
    }
    if (a > b)
        cout << giaithua[b];
    else
        cout << giaithua[a];
}