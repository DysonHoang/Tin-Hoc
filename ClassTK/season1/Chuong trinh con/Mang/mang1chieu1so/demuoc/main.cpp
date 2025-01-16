#include <bits/stdc++.h>

using namespace std;
int demuocC(int x){
int d=0;
for(int n=1;n<=x/2;n++)
    if(x%n==0)
    d++;
return d%2==0;
}
int main()
{int a[1000],n;
int demuocchan=0,demuocle=0;
    cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];

if(demuocC(a[i]))
    demuocchan++;
else
    demuocle++;

}
cout<<demuocchan<<endl;
cout<<demuocle<<endl;
    return 0;
}
