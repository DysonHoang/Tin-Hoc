#include <bits/stdc++.h>
using namespace std;

int main()
{
    double k;
    int n;
    cin >> n >> k;
    double a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
        {
            cout << setprecision(2) << fixed << a[i] << " ";
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > 0)
        {
            cout << setprecision(2) << fixed << a[i] << "\n";
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == k)
        {
            cout << i << " ";
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == k)
        {
            cout << i << " ";
            break;
        }
    }
}