// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll max1 = LLONG_MIN;

struct DATA
{
    long long A, B;
};

bool compare(DATA x, DATA y)
{
    return x.A < y.A;
}
int main()
{
    int n;
    cin >> n;
    vector<DATA> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].A >> a[i].B;
    }

    sort(a.begin(), a.end(), compare);
    ll sB = 0;
    ll minA = a[0].A;
    ll maxA = a[0].A;

    for (int i = 0; i < n; ++i)
    {
        sB += a[i].B;
        maxA = max(maxA, a[i].A);
        minA = min(minA, a[i].A);
        max1 = max(max1, sB - (maxA - minA));
    }

    cout << max1 << endl;

    return 0;
}
