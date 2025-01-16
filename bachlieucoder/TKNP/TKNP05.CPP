// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int min1 = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0, sum = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum >= s)
        {
            min1 = min(min1, right - left + 1);
            sum -= a[left];
            left++;
        }
    }

    cout << min1;
}
