#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    bool ans = false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    ans = true;
                    break;
                }
            }
        if(ans) break;
    }
     if(!ans) cout<< "-1"<<endl;

}