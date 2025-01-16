// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int N, D, T0;
    cin >> N >> D >> T0;
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; ++i)
    {
        int Si = a[i];
        int bus_time = T0;
        while (bus_time < Si)
        {
            bus_time += D;
        }
        int bus_number = (bus_time - T0) / D + 1;
        cout << bus_number << " ";
    }
    cout << endl;

    return 0;
}
