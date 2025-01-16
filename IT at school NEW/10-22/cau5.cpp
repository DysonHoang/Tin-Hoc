#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU5.INP", "r"))
    {
        freopen("CAU5.INP", "r", stdin);
        freopen("CAU5.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> m(n, 0);
    map<int, vector<int>> tong;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s += a[i];

        if (s == 0)
        {
            m[i]++;
        }

        if (tong.find(s) != tong.end())
        {
            for (int m1 : tong[s])
            {
                for (int j = m1 + 1; j <= i; j++)
                {
                    m[j]++;
                }
            }
        }

        tong[s].push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << m[i] << " ";
    }

    return 0;
}
