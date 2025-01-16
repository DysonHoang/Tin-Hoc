// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100005
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("MRFA.INP", "r"))
    {
        freopen("MRFA.INP", "r", stdin);
        freopen("MRFA.OUT", "w", stdout);
    }
    ll mau, tu;
    cin >> tu >> mau;
    ll ucln = __gcd(mau, tu);
    cout << (ll)tu / ucln << " " << (ll)mau / ucln;
}
