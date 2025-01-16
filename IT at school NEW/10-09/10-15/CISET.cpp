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
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CISET.INP", "r"))
    {
        freopen("CISET.INP", "r", stdin);
        freopen("CISET.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> result(n + 1, 0);

    for (int x = 1; x <= n; x++)
    {
        for (int i = 1; i < x; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                for (int k = j + 1; k < x; k++)
                {
                    if (a[i] + a[j] + a[k] == a[x])
                    {
                        result[x]++;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }
}
