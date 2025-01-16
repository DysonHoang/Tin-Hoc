#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int vt = 1, vtp = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] < a[i])
        {
            vt++;
        }
        else
        {
            vtp = n - vt;
            break;
        }
    }
    int ans = 0, dem = 0, in;
    int index[n];
    if (vt == 1)
    {
        ans = pow(2, n - 3);
        cout << ans;
        return 0;
    }
    else
    {
        for (int i = vt + 2; i <= vtp; i++)
        {
            if (a[i - 1] > a[i])
            {
                while (a[i - 1] < a[i] && a[i - 1] != a[i])
                {
                    dem++;
                }
            }
        }
        cout << dem;
    }
}
