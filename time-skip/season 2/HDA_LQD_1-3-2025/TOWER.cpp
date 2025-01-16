// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int max1 = INT_MIN;
int min1 = INT_MAX;
int n;
long long a[3000005];
vector<long long> top;

void find_the_smallest_top(long long x)
{
    int l = 0, r = top.size() - 1;
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (top[m] >= x)
        {
            pos = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    if (pos == -1)
    {
        top.push_back(x);
    }
    else
    {
        top[pos] = x;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    top.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        find_the_smallest_top(a[i]);
    }

    cout << top.size() << endl;

    return 0;
}