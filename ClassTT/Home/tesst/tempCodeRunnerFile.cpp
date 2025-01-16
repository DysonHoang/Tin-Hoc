// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int skipidi[10];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        skipidi[s[i] - 48]++;
    }
    int ans = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        ans = min(ans, skipidi[i]);
    }
    cout << ans;
}
