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
ll x = 0, y = 0, z = 0, n = 0, dem = 0;
bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int x = 2;
    for (int y = 3; y <= sqrt(n); y += 2)
    {
        ll z = y * y + 4;
        if (ktnt(z) && z <= n)
        {
            dem++;
            cout << x << " " << y << " " << z;
            cout << "\n";
        }
    }
    if (dem == 0)
        cout << "-1";
}