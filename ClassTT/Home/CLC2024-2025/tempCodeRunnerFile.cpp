#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int n, k, x, y;
    cin >> n;
    cin >> k;
    ll n2 = n * 2;
    int a[n2 + 5];
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
    for (int j = n + 1; j <= n2; j++)
    {
        a[j] = 0;
    }
    int dem = n;
    while (k--)
    {
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        
        if (a[x] == 1 && a[y] == 0 && x > n && n >= y)
            dem++;
        if (a[x] == 1 && a[y] == 0 && x <= n && n < y)
            dem--;
        swap(a[x], a[y]);
        cout << dem << "\n";
    }
}