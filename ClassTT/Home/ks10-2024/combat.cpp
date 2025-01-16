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
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max1 = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << (a[i] - max1) << " ";
    }
}
