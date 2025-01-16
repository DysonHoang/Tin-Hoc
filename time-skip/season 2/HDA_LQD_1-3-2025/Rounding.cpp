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

    float n;
    cin >> n;
    n /= 10;
    float d1 = floor(n);
    float d2 = ceil(n);
    float disd1 = n - d1;
    float disd2 = d2 - n;
    
    if (disd1 <= disd2)
        cout << (ll) d1 * 10;
    else
        cout << (ll) d2 * 10;
}