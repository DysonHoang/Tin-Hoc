// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

string check(string s)
{
    int n = S.size();
    for (int len = 1; len <= n / 2; ++len)
    {
        if (n % len == 0)
        {
            string sub = s.substr(0, len);
            string repeated = "";
            for (int i = 0; i < n / len; ++i)
            {
                repeated += sub;
            }
            if (repeated == s)
            {
                return sub;
            }
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;

    string result = check(s);
    cout << result << endl;

    return 0;
}