// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    int c[100] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[x]++;
    }

    vector<int> index;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            index.push_back(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << index[i] << " ";
    }
    cout << endl;

    return 0;
}
