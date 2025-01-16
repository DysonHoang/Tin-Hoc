#include <bits/stdc++.h>
using namespace std;

int main()
{
    double k;
    int n;
    cin >> n;
    double a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
        cout << setprecision(2) << fixed << a[i] << " ";
    cout << "\n";
    for (int i = n; i >= 1; i--)
        cout << setprecision(2) << fixed << a[i] << " ";
}