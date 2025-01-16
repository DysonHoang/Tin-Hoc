#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n, k, a;
    cin >> n >> k >> a;

    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            n--;
        }
    }
    cout << n*a;
}