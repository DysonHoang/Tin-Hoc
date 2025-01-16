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
    if (n == 86400)
    {
        cout << "0 0 0";
        return 0;
    }
    ll hours, minutes, second;
    hours = n / 3600;
    n = n - hours * 3600;
    minutes = n / 60;
    second = n - minutes * 60;
    cout << hours << " " << minutes << " " << second;
}
