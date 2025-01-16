#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int max1 = INT_MIN;
    int x = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i + 1])
            x++;
        else if (a[i] > a[i + 1])
        {
            x = 1;
        }
    }
    max1 = max(max1, x);
    cout << max1;
}