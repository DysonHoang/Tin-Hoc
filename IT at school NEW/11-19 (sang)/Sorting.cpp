// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    vector<ll> chan, le;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            chan.push_back(x);
        else
            le.push_back(x);
    }
    sort(chan.begin(), chan.end());
    sort(le.begin(), le.end());

    ll i = 0, j = 0;
    bool check = true;
    vector<ll> res;

    while (i < chan.size() || j < le.size()) {
        if (check && i < chan.size()) {
            res.push_back(chan[i++]);
        } else if (!check && j < le.size()) {
            res.push_back(le[j++]);
        } else if (i < chan.size()) { 
            res.push_back(chan[i++]);
        } else {
            res.push_back(le[j++]);
        }
        check = !check; 
    }

    for (ll x : res) {
        cout << x << " ";
    }
    return 0;
}
