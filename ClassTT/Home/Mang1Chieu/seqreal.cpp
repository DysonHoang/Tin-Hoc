#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    double all = 0.00, am = 0.00, duong = 0.00, vtc = 0.00, vtl = 0.00;
    for (int i = 1; i <= n; i++)
    {
        all += a[i];
        if (a[i] > 0)
            duong += a[i];
        else
            am += a[i];
        if (i % 2 == 0)
            vtc += a[i];
        else
            vtl += a[i];
    }
    cout << setprecision(2) << fixed << all << " " << am << " " << duong << " " << vtc << " " << vtl << endl;
}