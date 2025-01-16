#include <bits/stdc++.h>
using namespace std;
int a[1000000],n;
bool ktdx(int x)
{
 int dao=0,du,x1=x;
 while(x>0)
 {
 du=x%10;
 dao=dao*10+du;
 x=x/10;
 }
 return dao==x1;
}
bool hh(int x)
{
 int t=0;
 for(int i=1; i<=x/2; i++)
 if(x%i==0)
 t=t+i;
 return t==x;
}
void tongchan()
{
 int t=0;
 for(int i=1; i<=n; i++)
 if(a[i]%2==0)
 t=t+a[i];
 cout<<t;
}
void insodx()
{
 for(int i=1; i<=n; i++)
 if(ktdx(a[i]))
 cout<<a[i]<<" ";
}
void tonghh()
{
 int t=0;
 for(int i=1; i<=n; i++)
 if(hh(a[i]))
 t=t+a[i];
 cout<<t;
}
void nhap()
{
 cin>>n;
 for(int i=1; i<=n; i++)
 cin>>a[i];
}
int main()
{
 nhap();
 tongchan();
 cout<<endl;
 insodx();
 cout<<endl;
 tonghh();
}
