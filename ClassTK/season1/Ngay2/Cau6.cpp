#include <bits/stdc++.h>
#define ll long long
using namespace std;
int bcnn(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans=0;
    for (int i = 2; i <= n; i++)
    {
        ans=bcnn(a[i-1],a[i]);
    }
    cout<<ans;
}
