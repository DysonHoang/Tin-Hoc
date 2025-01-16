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
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (char d : s)
        {
            mp[d]++;
        }
        for (auto &m1 : mp)
        {
            if (m1.second == 1)
            {
                cout << m1.first;
                break;
            }
        }
    }   
}
