#include <bits/stdc++.h>
#define ll long long

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
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll a, b, dem = 0;
    cin >> a >> b;
    int x = sqrt(a);
    int y = sqrt(b);
    if (x * x < a)
        x = x + 1;
    if (y * y > b)
        y = y - 1;
    for (int i = x; i <= y; i++)
        if (ktnt(i))
            dem++;
    cout << dem;
}