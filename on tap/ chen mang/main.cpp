#include <bits/stdc++.h>

using namespace std;
int a[1000005];
int main()
{
    int n,AP,AN;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>AP>>AN;
    for(int i = n - 1; i >= AP; i--){
        a[i + 1] = a[i];
    }
    a[AP] = AN;
    ++n;
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
}
