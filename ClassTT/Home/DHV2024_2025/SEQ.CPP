#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[500000], b[500000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if ((a[i] == a[j]) != (b[i] == b[j]) )
            {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    cout << 1 << endl;
}
