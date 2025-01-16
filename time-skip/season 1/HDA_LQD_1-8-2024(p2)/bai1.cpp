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

    double a, b, c;
    cin >> a >> b >> c;
    double h = sqrt(c * c - pow((b - a) / 2.0, 2));
    double x = 0.5 * (a + b) * h;
    double doc = h / 4.0;
    cout << fixed << setprecision(2) << x - doc * doc * 3.14;
}
