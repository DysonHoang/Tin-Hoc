#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Performance {
    int s, t, c;
};

Performance a[402];
ll dp[402];
ll n, m;

bool cmp(Performance X, Performance Y) {
    return X.t < Y.t;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a[i].s >> a[i].t >> a[i].c;
    }

    sort(a + 1, a + m + 1, cmp);
    fill(dp, dp + m + 1, LLONG_MAX);
    dp[0] = 0;

    ll ans = LLONG_MAX;

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i].s >= a[j].t) {
                dp[i] = min(dp[i], dp[j] + a[i].c);
            }
        }
        if (a[i].t >= n) {
            ans = min(ans, dp[i]);
        }
    }

    cout << ans;
    return 0;
}
