// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll a[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int max1 = 1, current = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] >= a[i - 1])
        {
            ++current;
        }
        else
        {
            max1 = max(max1, current);
            current = 1;
        }
    }
    max1 = max(max1, current);

    cout << max1;
}
