// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int max1 = INT_MIN;
int min1 = INT_MAX;

int l[100000], r[100000], res[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }

        int maxx = 0;
        int ind = 0;

        for (int i = 0; i < n; i++)
        {
            maxx = max(maxx, l[i]);
            while (ind <= i)
            {
                if (maxx > r[ind])
                {
                    ind++;
                }
                else
                {
                    res[ind] = maxx;
                    maxx++;
                    ind++;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}