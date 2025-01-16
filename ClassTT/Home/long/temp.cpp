#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long
#define endl "\n"
#define _task "solve"
using namespace std;

bool SX(int Sx, int x)
{
    int S = 0;
    while (x > 0)
    {
        S += x % 10;
        x /= 10;
    }
    return (S == Sx);
}

signed main()
{

    faster;

    int n;
    cin >> n;

    for (int Sx = 1; Sx <= 90; Sx++)
    {
        int delta = Sx * Sx + 4 * n;
        double d1 = sqrt(delta);
        int d2 = sqrt(delta);

        if (d1 == d2)
        {
            int x = (-Sx + d2);
            int _x_ = x / 2;
            if (x % 2 == 0 && SX(Sx, _x_))
            {
                cout << _x_;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}