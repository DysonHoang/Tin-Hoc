
#include <bits/stdc++.h>
using namespace std;
bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int main()
{

    int n;
    cin >> n ;
    int dem = 0;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
            if (ktnt(a[i] + a[j]))
                dem++;
    }
    cout << dem << "\n";
}