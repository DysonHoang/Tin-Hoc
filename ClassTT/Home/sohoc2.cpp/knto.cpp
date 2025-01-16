// Good wine must be aged for a long time...
// Only : Hoang Duc Anh
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
ll x = 0, y = 0, z = 0, n = 0, count = 0, dem = 0, s = 0;
int main()
{
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                dem += 2;
                if (i * i == n)
                {
                    dem--;
                    dem -= ktnt(i);
                }
                else
                {
                    dem -= ktnt(i);
                    dem -= ktnt(n / i);
                }
            }
        }

        cout << dem;
    }
}
