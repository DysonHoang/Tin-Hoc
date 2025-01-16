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
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        long long a = 0, b = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            a += (s[i] == 'a');
            b += (s[i] == 'b');
        }
        cout << (a != b ? 1 : 2) << endl;
    }
}