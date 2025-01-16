#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;

int max1 = INT_MIN;
int min1 = INT_MAX;
int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int y, k, n;
    cin >> y >> k >> n;

    vector<int> a;
    for (int i = k; i <= n; i += k)
    {
        if (i > y)
        {
            a.push_back(i - y);
        }
    }

    if (a.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 0; i < a.size(); ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
