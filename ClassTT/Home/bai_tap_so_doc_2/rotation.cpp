// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    k = k % n;

    while (q--)
    {
        ll m;
        cin >> m;

        int index = (m - k + n) % n;

        cout << a[index] << endl;
    }
}
