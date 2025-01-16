#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    getline(cin, s);

    map<char, int> mp;
    for (char c : s)
    {
        if (isalpha(c))
        {
            c = tolower(c);
            mp[c]++;
        }
    }
    for (auto &mt : mp)
    {
        cout << mt.first << " " << mt.second << "\n";
    }
    return 0;
}
