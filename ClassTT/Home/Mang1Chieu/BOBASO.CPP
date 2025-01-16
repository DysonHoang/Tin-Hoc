#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100005], s = 0, dem = 0;
bool sodep(int n)
{
    while(n != 0)
    {
        if(n % 10 != 6 && n % 10 != 8)
        {
            return 0;
        }
        n = n / 10;
    }
    return 1;
}
main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            for(int k = j + 1; k <= n; k++)
        {
            if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[k]+a[j]>a[i])
                dem++;
                s=max(s,(a[i]+a[j]+a[k]));
        }
        cout<<dem<<" "<<s;
}