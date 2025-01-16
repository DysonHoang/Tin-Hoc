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
    int n;
    cin >> n;
    int a[100];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int d[101] = {0};
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + a[i - 1];
    }

    int halfN = n / 2;
    ll bestSum = LLONG_MAX;
    ll group1 = 0, group2 = sum;

    for (int j = n / 2; j <= n / 2 + 1; j++)
    {
        for (int i = 0; i <= n - j; i++)
        {
            ll sum1 = d[i + j] - d[i];
            ll sum2 = sum - sum1;

            if (abs(sum1 - sum2) < bestSum)
            {
                bestSum = abs(sum1 - sum2);
                group1 = sum1;
                group2 = sum2;
            }
        }
    }

    if (group1 > group2)
        swap(group1, group2);
    cout << group1 << " " << group2;
}
