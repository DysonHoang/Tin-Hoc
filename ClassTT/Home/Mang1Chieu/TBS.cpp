#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> a(n);

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    double tbc = sum / n;
    double min_diff = DBL_MAX;
    double closest_value = 0.0;

    for (int i = 0; i < n; ++i) {
        double diff = abs(a[i] - tbc);
        if (diff < min_diff) {
            min_diff = diff;
            closest_value = a[i];
        }
    }

    cout << fixed << setprecision(2) << tbc << endl << closest_value << endl;

    return 0;
}
