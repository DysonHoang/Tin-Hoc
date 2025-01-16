// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll max1 = 0;
bool SNT[Mx + 5];

void sangnt() {
    for (int i = 2; i <= Mx; i++) 
        SNT[i] = 1;
    for (int i = 2; i * i <= Mx; i++) 
        if (SNT[i]) 
            for (int j = i * i; j <= Mx; j += i) 
                SNT[j] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sangnt();
    string s;
    cin >> s;
    ll dem = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9') 
            dem++;
    cout << dem << "\n";

    ll curNum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            curNum = curNum * 10 + (s[i] - '0');
            if (curNum > Mx) 
                curNum = 0;
        } else {
            if (SNT[curNum] && max1 < curNum) 
                max1 = curNum;
            curNum = 0;
        }
    }
    if (SNT[curNum] && max1 < curNum) 
        max1 = curNum;
    cout << max1;
}
