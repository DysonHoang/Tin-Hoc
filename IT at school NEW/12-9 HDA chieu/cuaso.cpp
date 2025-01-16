// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    int a[n + 5] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n - 3; i++)
    {
        if (a[i] == a[i + 1])
        {
            for (int j = i + 2; j < n - 1; j++)
                if (a[j] == a[j + 1])
                {
                    cout << (a[i] + a[j]) * 2;
                    return 0;
                }
            cout << -1;
            return 0;
        }
    }
}