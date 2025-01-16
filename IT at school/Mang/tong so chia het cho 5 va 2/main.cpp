#include<bits/stdc++.h>
using namespace std;
int main()
{   float s=0;
    int n,a[100];
    //cout<<"nhap so pt cua mang:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
   // cout<<"a["<<i<<"]";
    cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if((a[i]%2==0)&&(a[i]%5==0))
        cout<<a[i]<<" ";
    }
    }
