// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("SONN.INP", "r"))
    {
        freopen("SONN.INP", "r", stdin);
        freopen("SONN.OUT", "w", stdout);
    }
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 9; i >= 1; i--)
    {
        if (n >= i)
        {
            a.push_back(i);
            n -= i;
        }
    }
    sort(a.begin(), a.end());
    for (int d : a)
    {
        cout << d;
    }

    return 0;
}
