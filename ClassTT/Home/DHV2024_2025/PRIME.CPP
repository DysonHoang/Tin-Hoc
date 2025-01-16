#include <bits/stdc++.h>
#define ll long long
#define Mx 10000000
using namespace std;

int a[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int max1 = INT_MIN;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    vector<int> count(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        if (a[i] <= n)
            count[a[i]]++;
    }
    ll dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 0)
            dem++;
    }
    cout << dem << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 0)
            cout << i << " ";
    }
}
