#include <bits/stdc++.h>
using namespace std;
const int nmax = 1e6;
int n, m;
int a[nmax], b[nmax];
void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
}
void sx()
{
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
}
void tinh()
{
    int i = 1, j = 1, d = 0;
    while (i <= n && j <= m)
        if (a[i] == b[j])
        {
            d++;
            j++;
            i++;
        }
        else if (a[i] > b[j])
            j++;
        else
            i++;
    cout << m - d;
}
int main()
{
    nhap();
    sx();
    tinh();
    return 0;
}