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
if(snt(n))
    cout<<"So Sieu Nguyen to";
else
    cout<<"Ko la so sieu nguyen to";
    return 0;
}
za
