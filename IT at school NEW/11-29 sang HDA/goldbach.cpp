// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
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

void solveGoldbach(ll k)
{
    ll best_a = -1, best_b = -1, max_diff = -1;
    bool found = false;

    for (ll a = 2; a <= k / 2; ++a)
    {
        ll b = k - a;
        if (ktnt(a) && ktnt(b))
        {
            found = true;
            ll diff = abs(a - b);
            if (diff > max_diff)
            {
                max_diff = diff;
                best_a = a;
                best_b = b;
            }
        }
    }

    if (found)
    {
        cout << best_a << " " << best_b << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<ll> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    for (ll k : numbers)
    {
        solveGoldbach(k);
    }

    return 0;
}
