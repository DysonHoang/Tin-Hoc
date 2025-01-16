#include <bits/stdc++.h>
using namespace std;
int a[10000],n;
bool cp(int x)
{
    int tg=sqrt(x);
    return tg*tg==x;
}
void nhap()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
}
void tongchan()
{
    int t=0;
    for(int i=1; i<=n; i++)
        if(a[i]%2==0)
            t=t+a[i];
    cout<<t;

}
void tongcp(){
int t=0;
    for(int i=1; i<=n; i++)
        if(cp(a[i]))
            //t=t+a[i]; tính tổng
          //  t=t+1; đếm
    cout<<a[i]<<" "; // in các số chính phương
}
int main()
{
    nhap();
    //tongchan();
    tongcp();
    return 0;
}
