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
    int n;
    cin >> n;
    for (int i = n / 2 - 1; i >= 3; i--)
    {
        if ((!(ktnt(i))) && (!(ktnt(n - i))))
        {
            cout << i << " " << n - i;
            return 0;
        }
    }
}