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
    int a[1005], b[1005], t, n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int i = 0, j = 0, cd = 0, d = 0;
        while (i < n && j < n)
        {
            if (a[i] < b[j])
            {
                cd++;
                d = max(cd, d);
                i++;
            }
            else
            {
                cd--;
                j++;
            }
        }
        cout << d << "\n";
    }
}
