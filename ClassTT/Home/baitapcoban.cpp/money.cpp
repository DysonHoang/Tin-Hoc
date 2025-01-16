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
    int n, b;
    cin >> n >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int index = a[0];
    int s = b;
    for (int i = 1; i < n; i++)
    {
        int smt = (b / index) * a[i] + (b % index);
        s = max(s, smt);
        index = min(index, a[i]);
    }

    cout << s << endl;
    return 0;
}
