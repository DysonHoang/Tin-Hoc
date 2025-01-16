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
    ll t, n;
    cin >> t;

    queue<string> q;
    q.push("4");
    q.push("7");

    vector<string> lucky;
    while (lucky.size() < 1000)
    {
        string cur = q.front();
        q.pop();
        lucky.push_back(cur);
        q.push(cur + "4");
        q.push(cur + "7");
    }
    while (t--)
    {
        cin >> n;
        cout << lucky[n - 1] << endl;
    }

    return 0;
}
