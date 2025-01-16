// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

bool canServeWithR(const vector<int>& houses, int K, int R) {
    int n = houses.size();
    int i = 0;
    int count = 0;

    while (i < n) {
        count++;
        int first_house = houses[i];
        while (i < n && houses[i] <= first_house + 2 * R) {
            i++;
        }
        if (count > K) return false;
    }
    return true;
}

int main() {
    int N, K;
    cin >> N;
    vector<int> houses(N);
    for (int i = 0; i < N; i++) {
        cin >> houses[i];
    }
    cin >> K;

    sort(houses.begin(), houses.end());

    int left = 0, right = 500000;
    int result = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (canServeWithR(houses, K, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << endl;

    return 0;
}
