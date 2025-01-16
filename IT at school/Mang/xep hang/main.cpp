#include <bits/stdc++.h>

using namespace std;
int n,a[1000],i,j,k;

int main()
{
    cout<<"Nhap so luong phan tu: ";
        cin>>n;
    cout<<"Nhap so luong can them vao: ";
        cin>>k;
    for(int i=k;i<n+1;i++){
        a[i+1]=a[i];
    }

    cout<<"Nhap gia tri cua phan tu: ";

       {
          for(int i=0;i<n;i++)
            cin>>a[i];
       }

    for(int i=0;i<n-1;i++)
       {
        for(int j=i+1;j<n;j++)
           {
            if(a[i]>a[j])
                swap(a[i],a[j]);
           }
       }
              for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
}
