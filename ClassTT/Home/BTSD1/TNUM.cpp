#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100005];
bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int check(int n)
{
    int in = sqrt(n);
    if (in * in == n)
    {
        if (ktnt(in))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
int32_t main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (check(a[i]))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
}