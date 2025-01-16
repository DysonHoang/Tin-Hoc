// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s, word;
    getline(cin, s);
    stringstream ss(s);
    ll max1 = 0;
    string alpha = "";
    while (ss >> word)
    {
        unordered_map<char, ll> mp;
        for (char d : word)
        {
            mp[d]++;
        }
        ll length = mp.size();
        if (max1 < length)
        {
            max1 = length;
            alpha = word;
        }
    }
    cout << max1 << "\n"
         << alpha;
}