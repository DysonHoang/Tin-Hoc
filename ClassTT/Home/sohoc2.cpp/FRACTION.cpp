// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
bool ktcp(int n)
{ 
    int k = sqrtl(n);
    return (k * k == n);
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll b, n;
    cin >> b >> n;
    ll res = 1;
    for (int a = 1; a < b; a++)
    {
        int x = (b - a) * n * n;
        if (x % b == 0 && ktcp(x / b))
            res = res + 2;
    }
    cout << res;
}