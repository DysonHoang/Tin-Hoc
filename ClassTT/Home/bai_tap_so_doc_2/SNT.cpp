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
bool snt[Mx];
void make_snt()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] == 0)
            for (int j = 2 * i; j <= 1e7; j += i)
                snt[j] = 1;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    make_snt();
    ll n;
    cin >> n;
    if (2 <= n)
        cout << 2 << " ";
    for (ll i = 3; i <= n; i += 2)
    {
        if (!snt[i])
            cout << i << " ";
    }
}