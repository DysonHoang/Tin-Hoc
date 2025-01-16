#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10000000];
int main()
{

    int n;
    cin >> n;
    ll smt=n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + 1 + n);
    ll dem = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i + 1])
        {
           dem++;
        }
        else 
            break;
    }
    if (dem == n)
    {
        cout << a[1] << " " << dem;
    }
    else
    {
        cout << a[1] << " " << smt - dem;
    }
}