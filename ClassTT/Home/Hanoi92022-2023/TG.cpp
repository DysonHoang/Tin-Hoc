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
    ll n;
    cin >> n;
    while (n--)
    {
        ll h = 8;
        ll x;
        cin >> x;
        while (x >= 60)
        {
            h++;
            if (h == 24)
                h = 0;
            x -= 60;
        }

        if (h < 10 && x < 10)
            cout << "0" << h << ":" << "0" << x;
        else if (h < 10 && x >= 10)
            cout << "0" << h << ":" << x;
        else if (h >= 10 && x >= 10)
            cout << h << ":" << x;
        else if (h >= 10 && x < 10)
            cout << h << ":" << "0" << x;
        cout << "\n";
    }
}