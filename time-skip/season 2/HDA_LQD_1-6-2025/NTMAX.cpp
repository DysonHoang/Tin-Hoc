// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 5000000
#define ll long long
using namespace std;

bool SNT [Mx+5];
void sangnt()
{
    for(int i=2; i<=Mx; i++)
        SNT[i]=1;
    for(int i=2; i<=sqrt(Mx); i++)
        if(SNT[i])
            for(int j=i*i; j<=Mx; j+=i)
                SNT[j]=0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    sangnt();
    
    string s;
    cin >> s;
    
    ll best_num = 0;
    ll num = 0;
    ll digits_count = 0;
    
    for (char d : s) {
        if (isdigit(d)) {
            num = num * 10 + (d - '0');
            if (num > Mx) num = 0;  
            digits_count++;
        } else {
            if (num <= Mx && SNT[num] && best_num < num) {
                best_num = num;
            }
            num = 0;
        }
    }
        if (num <= Mx && SNT[num] && best_num < num) {
        best_num = num;
    }
    
    cout << digits_count << "\n" << best_num;
}
