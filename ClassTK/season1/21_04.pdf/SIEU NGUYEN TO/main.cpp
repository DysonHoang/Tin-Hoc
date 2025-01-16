#include <bits/stdc++.h>

using namespace std;
int a[1000000];
bool nt(int x){
if(x<2) return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
        return 0;
return 1;
}
bool snt(int x){
while(x>0){
 if(nt(x)){
    return 1;
 }
    else return 0;
}
x=x/10;
}

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
if(snt(a[i]))
    cout<<a[i];
}
}
