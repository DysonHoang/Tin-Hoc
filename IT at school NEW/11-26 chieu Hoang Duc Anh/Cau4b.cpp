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

    string res;
    int i = 0;

    while (i < s.length())
    {
        char ch = s[i];
        i++;

        int count = 0;
        while (i < s.length() && s[i] >= '0' && s[i] <= '9')
        {
            count = count * 10 + (s[i] - '0');
            i++;
        }

        if (count == 0)
        {
            count = 1;
        }

        for (int k = 0; k < count; k++)
        {
            res += ch;
        }
    }

    cout << res << endl;
    return 0;
}
