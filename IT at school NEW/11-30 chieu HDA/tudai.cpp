// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = 0;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s, s1;
    cin >> s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    while (ss >> word)
    {
        map<char, ll> mp;
        for (char d : word)
        {
            mp[d]++;
        }
        if (max1 < mp.size())
        {
            max1 = mp.size();
            s1 = word;
        }
        for (auto m1 : mp)
        {
            m1.second = 0;
        }
    }
    cout << max1 << "\n"
         << s1;
}
