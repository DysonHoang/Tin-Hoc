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
        int x;
        cin >> x;
        if (x < 38)
        {
            cout << x;
        }
        else
        {
            ll m = ((x / 5) + 1) * 5;
            if (m - x < 3)
            {
                cout << m;
            }
            else
            {
                cout << x;
            }
        }
        cout << "\n";
    }
}