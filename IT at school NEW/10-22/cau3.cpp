#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU3.INP", "r"))
    {
        freopen("CAU3.INP", "r", stdin);
        freopen("CAU3.OUT", "w", stdout);
    }
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int du = n - k;
    string result = "";

    for (char s1 : s)
    {
        while (!result.empty() && result.back() < s1 && du > 0)
        {
            result.pop_back();
            du--;
        }
        result.push_back(s1);
    }
    result = result.substr(0, k);

    cout << result;
}
