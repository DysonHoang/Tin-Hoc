#include <bits/stdc++.h>

using namespace std;
int n,a[1000],i,j;

int main()
{
    cout<<"Nhap so luong phan tu: ";
        cin>>n;
    cout<<"Nhap gia tri cua phan tu: ";
       {
          for(int i=0;i<n;i++)
            cin>>a[i];
       }

       {
        for(int j=i+1;j<n;j++)
           {
            if(a[i]<a[j])
                swap(a[j],a[i]);
           }
       }
       for(int i=0;i<n;i++)
            cout<<a[i]<<" ";


}
