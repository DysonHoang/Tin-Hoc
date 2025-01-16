/// sigma boyđŸ¤ªđŸ¤ªđŸ¤ª
#include <bits/stdc++.h>
#define int long long
#define siu                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
string s, c = "";
vector<string> res;
main()
{
    siu;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            c += s[i];
        else
        {
            if (c != "")
            {
                res.push_back(c);
                c = "";
            }
        }
    }
    if (c != "")
        res.push_back(c);
    if (res.size() == 0)
    {
        cout << -1;
        return 0;
    }
    for (string s1 : res)
        cout << s1 << '\n';
}