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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            n /= 2;
            if (n % 2 == 0)
            {
                cout << "0" << "\n";
                return 0;
            }
        }

        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                n /= i;
                if (n % i == 0)
                {
                    cout << "0" << "\n";
                    return 0;
                }
            }
        }
        cout << "1" << "\n";
    }
}