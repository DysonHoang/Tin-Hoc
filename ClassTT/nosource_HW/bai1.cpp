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
    int a, b, c;
    cin >> a >> b >> c;

    vector<string> v = {to_string(a), to_string(b), to_string(c)};

    sort(v.begin(), v.end(), greater<string>());
    string ans1 = v[0] + v[1] + v[2];
    string ans2 = v[1] + v[2] + v[0];

    cout << ans1 << " " << ans2 << endl;

    return 0;
}
