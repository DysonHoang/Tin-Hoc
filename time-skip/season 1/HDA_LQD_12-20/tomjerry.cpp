// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 1000000000
#define ll long long
using namespace std;
bool canTomWin(int n)
{
    if (n == 1)
        return false;

    if (n % 2 == 0)
        return true;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (canTomWin(N))
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

}