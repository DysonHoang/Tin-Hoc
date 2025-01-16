#include <bits/stdc++.h>
#include <string>

using namespace std;
int a[100000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        long long count=0;
    for (int i = 1; i <= n; i++)
    {
        for(int j=i+1;j<=n;j++)
            {
                if((__gcd(a[i],a[j]))%k==0)
                    ++count;
            }
    }
        cout<<count;
}