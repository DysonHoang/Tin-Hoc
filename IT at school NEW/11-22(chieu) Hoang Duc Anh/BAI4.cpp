#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll count = 0;

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
            count += (k - j - 1);
        }
    }

    cout << count;
}
