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
bool bt(int x)
{
    int du;
    if (x < 11)
        return 0;
    while (x > 0)
    {
        du = x % 10;
        x = x / 10;
        if (x % 10 >= du)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (bt(a[i]))
            dem++;
    }
    cout << dem;
}