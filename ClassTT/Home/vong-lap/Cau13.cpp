#include <bits/stdc++.h>
#define ll long long
using namespace std;
int tcs(int x)
{
    int t = 0, du;
    while (x > 0)
    {
        du = x % 10;
        t = t + du;
        x = x / 10;
    }
    return t;
}

int main()
{
    ll n;
    cin >> n;
    int n1 = n, tg = 0, tong = 0;
    while (n >= 10)
    {
        n = tcs(n);
    }
    cout<<n;
}