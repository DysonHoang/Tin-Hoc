#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("KiTuChung.Inp", "r", stdin);
    freopen("KiTuChung.Out", "w", stdout);

    string X, Y;
    getline(cin, X);
    getline(cin, Y);

    set<char> setX(X.begin(), X.end());
    set<char> setY(Y.begin(), Y.end());
    set<char> commonChars;

    for (char c : setX) {
        if (setY.count(c)) {
            commonChars.insert(c);
        }
    }

    for (char c : commonChars) {
        cout << c << endl;
    }

    return 0;
}
