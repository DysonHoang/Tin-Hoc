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
    if (fopen("xuathien.INP", "r"))
    {
        freopen("xuathien.INP", "r", stdin);
        freopen("xuathien.OUT", "w", stdout);
    }
    string s;
    cin >> s;

    vector<int> in(10, 0);
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            in[c - '0']++;
        }
    }

    int ans = 0;

    for (int i = 0; i < 10; i++)
    {
        if (in[i] > max1 || (in[i] == max1 && i > ans))
        {
            max1 = in[i];
            ans = i;
        }
    }

    cout << ans << "\n";
    return 0;
}
