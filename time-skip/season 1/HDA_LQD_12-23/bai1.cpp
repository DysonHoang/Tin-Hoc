// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int count2numberfirst(int n) {
    n /= 10;
    n /= 10;
    int sum1 = n % 10;
    n /= 10;
    int sum2 = n % 10;
    return sum1 + sum2;
}

int count2numberlast(int n) {
    int sum1 = n % 10;
    n /= 10;
    int sum2 = n % 10;
    return sum1 + sum2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    if (s.length() < 4) {
        cout << 0;
        return 0;
    }

    ll tong1 = (s[0] - '0') * 10 + (s[1] - '0');
    ll tong2 = (s[2] - '0') * 10 + (s[3] - '0');

    for (int i = 1000; i <= 9999; i++) {
        if (count2numberfirst(i) == tong2 && count2numberlast(i) == tong1) {
            cout << i;
            return 0;
        } else if (count2numberfirst(i) == tong1 && count2numberlast(i) == tong2) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}