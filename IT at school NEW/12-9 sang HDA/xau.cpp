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
    string s;
    cin >> s;
    map<char, ll> mp;
    for (char d : s)
    {
        mp[d]++;
    }
    ll max1 = 0;
    char alpha;
    for (auto m1 : mp)
    {
        if (m1.second > max1)
        {
            max1 = m1.second;
            alpha = m1.first;
        }
    }
    cout << alpha << "\n"
         << max1;
}