#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);

    cout << fixed << setprecision(2) << (double)a[n] << " " << (double)a[1];
}