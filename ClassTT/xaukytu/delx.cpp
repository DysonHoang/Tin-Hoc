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
    char x;
    cin >> x;
    cin.ignore();
    string s;
    getline(cin, s);
    ll n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            s.erase(i, 1);
            --i;
            --n;
        }
    }
    cout << s;
}