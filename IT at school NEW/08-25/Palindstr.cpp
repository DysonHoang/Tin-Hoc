// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
bool isPalindrome(string s, int x, int x2)
{
    while (x < x2)
    {
        if (s[x] != s[x2])
        {
            return false;
        }
        x++;
        x2--;
    }
    return true;
}

int check(const string &s)
{
    int n = s.length();
    if (n == 0)
        return 0;

    int maxLength = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (isPalindrome(s, i, j))
            {
                max1 = max(max1, j - i + 1);
            }
        }
    }

    return max1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Palindstr.INP", "r"))
    {
        freopen("Palindstr", "r", stdin);
        freopen("Palindstr", "w", stdout);
    }
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int ans = check(s);
    cout << ans << endl;
}
