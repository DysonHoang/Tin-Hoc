#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10000000];
int main()
{

    int n;
    cin >> n;

    int first;
    cin >> first;
    int ans = first;

    for (int i = 2; i <= n; ++i)
    {
        int smt;
        cin >> smt;
        ans = __gcd(ans, smt);
    }

    cout << ans << endl;
        return 0;
}