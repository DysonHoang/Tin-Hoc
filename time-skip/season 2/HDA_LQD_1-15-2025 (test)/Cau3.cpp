// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll count = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        count++;
    }
    cout << count;
}