#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    ll k = 1; 
    while (true) {
        ll square = k * k;
        if (square % n == 0) {
            cout << square;
            break;
        }
        k++;
    }

    return 0;
}
