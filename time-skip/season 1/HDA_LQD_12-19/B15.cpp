// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool check(string s1)
{
    ll left = 0, right = s1.size() - 1;
    while (left < right)
    {
        if (s1[left] != s1[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (check(s))
        cout << 1;
    else
        cout << 0;
}