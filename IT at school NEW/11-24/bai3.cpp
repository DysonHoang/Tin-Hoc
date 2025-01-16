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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll count = 1;
    sort(a, a + n, greater<int>());
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0])
        {
            count++;
        }
        else
            break;
    }
    cout << count;
}