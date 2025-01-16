// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int max1 = INT_MIN;
int min1 = INT_MAX;
int t, a, b;
int index1[1000005];
bool snt[1000005];
void make_snt()
{
    for (int i = 2; i <= sqrt(1e6); i++)
        if (snt[i] == 0)
            for (int j = 2 * i; j <= 1e6; j += i)
                snt[j] = 1;
}
main()
{
    make_snt();
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 2; i <= 1e6; i++)
    {
        index1[i] = index1[i - 1];
        if (snt[i] == 0)
            index1[i]++;
    }
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << index1[b] - index1[a - 1] << "\n";
    }
}
