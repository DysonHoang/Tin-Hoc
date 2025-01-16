#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, tong = 0;
    cin >> n;
    int n1 = n;
    if (n1 >= 100)
    {
        tong += 2000 * 100;
        n = n - 100;
    }
    else
    {
        cout << 2000 * n;
        return 0;
    }
    if (n1 >= 200)
    {
        tong += 3000 * 100;
        n = n - 100;
    }
    else
    {
        cout << tong + 3000 * n;
        return 0;
    }
    if (n1 >= 300)
    {
        tong += 5000 * 100;
        n = n - 100;
    }
    else
    {
        cout << tong + 5000 * n;
        return 0;
    }

    if (n1 > 300)
    {
        tong += 10000 * n;
    }
}