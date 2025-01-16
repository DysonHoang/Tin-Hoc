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

    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<int> a(26, 0);
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }

        ll result = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[s[i] - 'a'] == 1)
            {
                result = i + 1;
                break;
            }
        }

        cout << result << "\n";
    }
}
