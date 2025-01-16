// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;
int n, res = 0;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    if (fopen("CAU5A.INP", "r"))
    {
        freopen("CAU5A.INP", "r", stdin);
        freopen("CAU5A.OUT", "w", stdout);
    }
    cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n - 2; i++)
    {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; j++)
        {
            while (k < n && a[i] + a[j] > a[k])
            {
                k++;
            }
            res += k - j - 1;
        }
    }

    cout << res;
}
