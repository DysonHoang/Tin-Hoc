#include <bits/stdc++.h>
#define Mx 1000000005
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
bool ktnt(ll x)
{
    if (x < 2)
        return 0;
    for (ll i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll gcd = __gcd(a, b);
    cout << gcd << "\n";
    cout << a / gcd << " " << b / gcd;
}