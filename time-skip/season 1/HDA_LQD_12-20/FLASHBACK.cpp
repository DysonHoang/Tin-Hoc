// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 1000000000
#define ll long long
using namespace std;
const int mod = 1e9 + 7; 

int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    long long n, k, t;
    cin >> n >> k;
    long long s[100005];
    s[0] = n;
    t = n;
    for (int i = 1; i <= k; i++)
    {
        s[i] = (s[i - 1] + t) % mod;
        t = (t + s[i]) % mod;
    }
    cout << s[k];
}