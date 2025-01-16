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
    if (fopen("chonsp.INP", "r"))
    {
        freopen("chonso.INP", "r", stdin);
        freopen("chonso.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    vector<string> a(n);
    ll sochan = 0, sole = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i].back()  % 2 == 0)
        {
            sochan++;
        }
        else
        {
            sole++;
        }
    }
    long long result = 0;
    result += (long long)sochan * (sochan - 1) / 2;
    result += (long long)sole * (sole - 1) / 2;
    result += sochan;
    result += sole;

    cout << result ;
}
