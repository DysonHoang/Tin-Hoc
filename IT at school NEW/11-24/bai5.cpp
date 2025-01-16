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
    int n, p;
    cin >> n >> p;
    vector<int> a(p);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max1 = 0;
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (a[j] - a[i] >= p)
            {
                max1 = max(max1, j - i);
            }
        }
    }
    cout << max1;
}
