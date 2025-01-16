#include <bits/stdc++.h>

using namespace std;
int a[10000];
bool snt(int x)
{
    if(x<2)
        return 0;
    if(x>=2)
    {
        for(int i=2; i<=x/2; i++)
            if(x%i==0)
                return 0;
        return 1;
    }
}
int main()
{
    float s=0;
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        if(snt(a[i]))
        {
            s=s+a[i];
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(a[i]<a[j])
                    swap(a[i],a[j]);

            }
        }
    }
        for(int i=1; i<=k; i++)
        {
            cout<<a[i]<<" ";

        }

    cout<<endl;
    cout<<s;
}
