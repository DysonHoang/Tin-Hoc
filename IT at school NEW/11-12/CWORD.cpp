// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
string s, s1;
bool check(string s1)
{
    ll left = 0, right = s1.size() - 1;
    while (left < right)
    {
        if (s1[left] != s1[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
int main()
{
    if (fopen("CWORD.INP", "r"))
    {
        freopen("CWORD.INP", "r", stdin);
        freopen("CWORD.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    stringstream ss(s);

    ll count = 0;
    while (ss >> s1)
    {
        string word;
        for (char c : s1)
        {
            if (c >= 'A' && c <= 'Z')
                word += c + 32;
            else
                word += c;
        }
        if (!word.empty() && check(word))
        {
            count++;
        }
    }
    cout << count;
}
