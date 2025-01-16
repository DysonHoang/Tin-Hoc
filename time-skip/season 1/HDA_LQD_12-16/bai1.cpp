// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;

    int max1 = 0;

    for (int x = 0; x * a <= n; x++)
    {
        for (int y = 0; x * a + y * b <= n; y++)
        {
            int currentWeight = x * a + y * b;
            if (currentWeight > max1)
            {
                max1 = currentWeight;
            }
        }
    }
    cout << max1 << endl;

    return 0;
}
