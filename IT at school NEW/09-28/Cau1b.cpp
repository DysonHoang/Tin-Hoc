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
    if (fopen("Cau1b.INP", "r"))
    {
        freopen("Cau1b.INP", "r", stdin);
        freopen("Cau1b.OUT", "w", stdout);
    }
    int n;
    double x;
    cin >> n >> x;

    double sum = 1 + x;
    double tu = x;
    long long mau = 1;

    for (int i = 1; i <= n; ++i)
    {
        mau *= (2 * i) * (2 * i + 1);
        tu *= x * x;
        sum += tu / mau;
    }

    cout << setprecision(3) << fixed << sum << endl;
    return 0;
}
