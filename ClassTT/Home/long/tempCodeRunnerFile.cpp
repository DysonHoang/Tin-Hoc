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
    ll n;
    cin >> n;
    set<long long> s;
    ll a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (auto &urmom : s)
    {
        cout << urmom << " ";
    }
}