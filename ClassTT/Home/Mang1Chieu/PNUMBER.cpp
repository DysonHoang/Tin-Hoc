#include <bits/stdc++.h>
using namespace std;
bool sodep(int x)
{
    int x1 = x, index = 0;
    while (x1 > 0)
    {
        index = x1 % 10;
        if (index == 8 || index == 6)
        {
            x1 = x1 / 10;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (sodep(a[i]))
            dem++;
    }
    cout << dem << "\n";
}