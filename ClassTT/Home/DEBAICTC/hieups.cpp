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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll tu = a * d - b * c;
    ll mau = b * d;
    ll rutgon = __gcd(tu, mau);
    tu = tu / rutgon;
    mau = mau / rutgon;
    
    if (tu > 0 && mau < 0)
    {
        cout << -tu << "/" << -mau;
    }
    else
        cout << tu << "/" << mau;
}