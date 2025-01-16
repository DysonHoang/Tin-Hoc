#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string S;
    int k;
    cin >> S >> k;

    int changes = 0;
    for (int i = 0; i < S.size() * k - 1; ++i) {
        if (S[i % S.size()] == S[(i + 1) % S.size()]) {
            changes++;
            i++; 
        }
    }

    cout << changes << endl;
    return 0;
}

