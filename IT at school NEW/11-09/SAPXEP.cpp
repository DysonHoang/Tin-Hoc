// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
struct DATA
{
    int start, end;
};

bool cmp(DATA a, DATA b)
{
    return a.end < b.end;
}

int main()
{
    if (fopen("SAPXEP.INP", "r"))
    {
        freopen("SAPXEP.INP", "r", stdin);
        freopen("SAPXEP.OUT", "w", stdout);
    }
    int n;
    cin >> n;

    vector<DATA> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].start >> a[i].end;
    }

    sort(a.begin(), a.end(), cmp);

    int count = 1;
    int end = a[0].end;
    for (int i = 1; i < n; i++)
    {
        if (a[i].start >= end)
        {
            count++;
            end = a[i].end;
        }
    }

    cout << count << endl;

    return 0;
}
