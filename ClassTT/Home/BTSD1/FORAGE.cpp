#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll p;
    ll n, k;
    cin >> p >> n >> k;
    long long totalCost = 0;
    for (ll i = 1; i <= n; i++)
    {
        totalCost += i * k;
    }
    if (totalCost <= p)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        cout << totalCost - p << endl;
    }
}