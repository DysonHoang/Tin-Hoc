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

    string str;
    cin >> str;
    map<char, int> freq;
    for (char c : str)
    {
        freq[c]++;
    }
    int max_freq = 0;
    for (const auto &p : freq)
    {
        max_freq = max(max_freq, p.second);
    }

    for (const auto &p : freq)
    {
        if (p.second == max_freq)
        {
            cout << p.first << max_freq;
        }
    }
    cout << "\n";

    return 0;
}
