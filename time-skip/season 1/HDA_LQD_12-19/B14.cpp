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
    string s, x;
    getline(cin, s); 
    cin >> x;    

    ll k = s.find(x);

    if (k != string::npos) {
        cout << s.substr(k) << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}
