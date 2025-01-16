// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll a, b, n1;
    cin >> a >> b;
    ll count = 0;
    ll idx = __gcd(a, b);
    for (int i = 1; i * i <= idx; i++)
    {
        if (idx % i == 0)
        {
            count++;
            if (i != idx / i)
            {
                count++;
            }
        }
    }
    cout << count;
}