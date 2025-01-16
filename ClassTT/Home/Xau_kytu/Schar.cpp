
#include <bits/stdc++.h>
using namespace std;
int findFirstUniqueChar(const string &s)
{
    unordered_map<char, int> charCount;
    for (char c : s)
    {
        charCount[c]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (charCount[s[i]] == 1)
        {
            return i + 1;
        }
    }

    return -1;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        cout << findFirstUniqueChar(s);
        cout << "\n";
    }
}
