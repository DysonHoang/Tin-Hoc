// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int sangtonguoc[3000005];
void supertonguoc()
{
    for (int i = 1; i <= 3e6; i++)
        for (int j = i; j <= 3e6; j += i)
            sangtonguoc[j] += i;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll L, R;
    cin >> L >> R;

    supertonguoc();

    ll count = 0;
    for (ll i = L; i <= R; ++i)
    {
        if ((sangtonguoc[i] - i) > i)
        {
            ++count;
        }
    }

    cout << count;
}
