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
    ll t = (1 + (n / 2 - 1)) * (n / 2 - 1)  / 2;
    if (n % 2 != 0)
    {
        cout << t * 2 + (n / 2); 
    }
    else
    {
        cout << t * 2;
    }
}