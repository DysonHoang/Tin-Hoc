// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int c[1000000], d[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;

    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    int sotao = 0, socam = 0;

    for (int i = 0; i < m; i++)
    {
        int vttao = a + c[i];
        if (vttao >= s && vttao <= t)
        {
            sotao++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int vtc = b + d[i];
        if (vtc >= s && vtc <= t)
        {
            socam++;
        }
    }

    cout << sotao << endl;
    cout << socam << endl;
}
