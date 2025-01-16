#include <bits/stdc++.h>
using namespace std;

bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int a[105];
    int n;
    cin >> n;
    int dem = 0, s = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (ktnt(a[i]))
        {
            dem++;
            s += a[i];
        }
    }
    cout << dem << " " << s;
}