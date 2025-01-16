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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<string> substrings(k);
    for (int i = 0; i < n; ++i)
    {
        substrings[i % k] += s[i];
    }

    string res = substrings[0];
    for (int i = 1; i < k; ++i)
    {
        if (substrings[i] > res)
        {
            res = substrings[i];
        }
    }

    cout << res ;
}