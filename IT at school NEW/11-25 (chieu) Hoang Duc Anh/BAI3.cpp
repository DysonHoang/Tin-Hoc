// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int stu[1000005];
void supertonguoc()
{
    for (int i = 1; i <= 1e6; i++)
        for (int j = i; j <= 1e6; j += i)
            stu[j] += i;
}


int main()
{
    supertonguoc();
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (stu[x] >= 2 * x)
            cout << "1\n";
        else
            cout << "0\n";
    }
}