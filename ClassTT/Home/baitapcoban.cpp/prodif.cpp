// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t, D, P;
    cin >> t;
    while (t--)
    {
        cin >> D >> P;
        ll count = 0;

        if (D == 0)
        {
            int A = sqrt(P);
            if (A * A == P)
                count++;
            if (A && (-A) * (-A) == P)
                count++;
        }
        else
        {
            for (int A = -100; A <= 100; ++A)
            {
                if (A * (A - D) == P)
                    count++;
                if (A * (A + D) == P && (A - D) != (A + D))
                    count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
