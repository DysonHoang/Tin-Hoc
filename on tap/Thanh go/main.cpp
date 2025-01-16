#include <bits/stdc++.h>
using namespace std;
long long n,a[1000000];
long long s;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a[1];
    }
    sort(a+1, a+1+n);
    for (int i = 2; i <= n; i++)
    {
        if (a[1] < a[i])
        {
            s = a[i] - a[1];
            break;
        }
    }
    cout << s;
}
