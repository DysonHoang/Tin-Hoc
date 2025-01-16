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
    ll n, t;
    ll p, q, m;
    cin >> n >> t >> p >> q >> m;
    while (t--)
    {
        ll A, B;
        cin >> A >> B;
        ll dem = 0;
        for (int i = A; i <= B; i++)
        {
            if (ktnt(a[i]))
            {
                dem++;
            }
        }
        cout << dem << "\n";
    }
}