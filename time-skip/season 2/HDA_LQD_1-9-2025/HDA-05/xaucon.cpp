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
    string s;
    cin >> s;
    ll n = s.size();
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        if ((s[i] - '0') % 4 == 0)
            z++;
        if (i > 0)
        {
            ll z = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if (z % 4 == 0)
                z += i;
        }
    }
    cout << z;
}
