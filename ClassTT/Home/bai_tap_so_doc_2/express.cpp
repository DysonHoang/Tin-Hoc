#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;

int a[1000000];
int max1 = INT_MIN;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int product = a[i] * a[j];
            int sum = 0;

            for (int k = 0; k < n; k++)
            {
                if (k != i && k != j)
                {
                    sum += a[k];
                }
            }

            max1 = max(max1, product + sum);
        }
    }

    cout << max1 << endl;
    return 0;
}
