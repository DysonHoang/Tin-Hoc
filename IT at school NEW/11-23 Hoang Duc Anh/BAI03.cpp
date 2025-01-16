// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int n, m;
ll a[Mx + 5], pos[10000005];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (pos[a[i] - m] != 0)
        {
            cout << pos[a[i] - m] << " " << i + 1;
            exit(0);
        }
        if (pos[a[i]] == 0)
        {
            pos[a[i]] = i + 1;
        }
        pos[a[i]] = i + 1;
    }
    cout << -1;
}