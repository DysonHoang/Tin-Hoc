// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;

    while (t--)
    {

        ll n, p;
        cin >> n >> p;
        if (p == 1 || p == n || n - 1 == p)
        {
            cout << 0;
            cout << "\n";
            continue;
        }
        ll from_start = p - 1;
        ll from_end = n - p;

        int result = min(from_start, from_end);
        cout << result;
        cout << "\n";
    }
    return 0;
}
