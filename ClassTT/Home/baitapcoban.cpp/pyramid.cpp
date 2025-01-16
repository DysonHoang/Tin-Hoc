// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll r1, r2;
    cin >> r1 >> r2;
    ll r = ceil(sqrt(n)), c;
    if (r % 2 == 0)
    {
        c = n - (r - 1) * (r - 1);
    }
    else
        c = r * r - n + 1;
    cout << r << " " << c << "\n";
    if (r % 2 == 0)
        n = c + (r - 1) * (r - 1);

    else if (r % 2 != 0)
        n = r * r + 1 - c;
    cout << n;
