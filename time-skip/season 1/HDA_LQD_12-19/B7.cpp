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
    string s, word;
    cin >> s;
    string s1 = "";
    for (char d : s)
    {
        if (d >= 'A' && d <= 'Z')
        {
            d += 32;
            s1 = s1 + d;
        }
        else
            s1 = s1 + d;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (i % 2 == 0)
        {
            s1[i] -= 32;
            cout << s1[i];
        }
        else
            cout << s1[i];
    }
}