// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

using namespace std;

bool check(string s)
{
    for (size_t i = 1; i < s.size(); ++i)
    {
        if (abs(s[i] - s[i - 1]) != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<string> s(n);
    vector<int> count(k);

    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> count[i];
    }

    for (int i = 0; i < k; ++i)
    {
        ll count1 = 0;
        string phone = s[count[i] - 1];

        if (check(phone))
        {
            count1++;
        }

        cout << count1 << endl;
    }

    return 0;
}
