#include <bits/stdc++.h>
#define Mx 100000000
using namespace std;
map<int, int> mp;
int a[1000000];
int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto &m1 : mp)
    {
        cout << m1.first << " " << m1.second << "\n";
    }
}