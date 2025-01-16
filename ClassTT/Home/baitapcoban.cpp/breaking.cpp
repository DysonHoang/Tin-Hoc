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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll minn = 0, max = 0, d = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[max])
        {
            d++;
            max = i;
        }
        if (a[i] < a[minn])
        {
            t++;
            minn = i;
        }
    }
    cout << d << ' ' << t;
}