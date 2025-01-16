// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;

bool check(string s1)
{
    int left = 0, right = s1.size() - 1;
    while (left < right)
    {
        if (s1[left] != s1[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int l = 0; l <= k; l++)
    {
        int r = k - l;
        if (l <= n && r <= n)
        {
            string s1 = s.substr(l, n - l - r);
            if (check(s1))
            {
                cout << s1;
                return 0;
            }
        }
    }

    cout << "No";
}
