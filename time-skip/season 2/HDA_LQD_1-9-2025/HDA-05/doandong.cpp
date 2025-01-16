#include <bits/stdc++.h>
#define VIP                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define Max INT_MIN
#define Min INT_MAX
#define m 1000006
#define z 1000000007
using namespace std;
bool kt[m];
int n, l, r, t, j, vt = 0;
ll a[m], b[m], c[m], res = 0;
int main()
{
    VIP;
    for (int i = 4; i < 1000001; i = i + 2)
        kt[i] = 1;
    for (int i = 9; i < 1000000; i = i + 6)
        kt[i] = 1;
    for (int i = 5; i < 1000; i = i + 4)
    {
        if (kt[i] == 0)
        {
            t = i + i;
            j = i * i;
            while (j < 1000000)
            {
                kt[j] = 1;
                j = j + t;
            }
        }
        i = i + 2;
        if (kt[i] == 0)
        {
            t = i + i;
            j = i * i;
            while (j < 1000000)
            {
                kt[j] = 1;
                j = j + t;
            }
        }
    }
    cin >> n;
    n++;
    cin >> a[1];
    for (int i = 2; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] + a[i - 1];
    }
    for (int i = 2; i < n; i++)
    {
        if (kt[i] == 0)
        {
            c[vt] = a[i - 1];
            b[vt] = a[i];
            vt++;
        }
    }
    t = c[0];
    for (int i = 0; i < vt; i++)
    {
        if (c[i] < t)
            t = c[i];
        j = b[i] - t;
        if (j > res)
            res = j;
    }
    cout << res;
    return 0;
}