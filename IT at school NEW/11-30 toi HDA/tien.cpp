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
    int n;
    cin >> n; 

    ll d[] = {1, 2, 5, 10, 20, 50, 100};
    ll counts[7] = {0};

    for (int i = 6; i >= 0; --i)
    {
        counts[i] = n / d[i];
        n %= d[i];
    }

    for (int i = 0; i < 7; ++i)
    {
        cout << d[i] << " " << counts[i] << endl;
    }

    return 0;
}
