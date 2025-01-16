#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll a;
    cin >> a;
    ll count = 0;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            ++count;
            while (a % i == 0)
                a /= i;
        }
    }
    if (a > 1)
        ++count;
    cout << count << endl;
}