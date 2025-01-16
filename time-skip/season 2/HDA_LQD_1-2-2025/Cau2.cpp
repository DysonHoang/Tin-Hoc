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
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int n = a.size(), m = b.size();
    int maxLength = 0;
    string res = "";

    for (int i = 0; i < n; i++)
    {
        int len = 0;
        string current = "";
        for (int j = 0; j < m && i + j < n; j++)
        {
            if (a[i + j] == b[j])
            {
                current += a[i + j];
                len++;
            }
            else
            {
                break;
            }
        }
        if (len > maxLength)
        {
            maxLength = len;
            res = current;
        }
    }

    cout << res << endl;
    return 0;
}