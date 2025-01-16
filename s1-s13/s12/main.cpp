#include <bits/stdc++.h>

using namespace std;
int n;
bool ktnt(int x){
if(x<2) return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
    return 0;
return 1;
}
int sodao(int x){
    int dao=0,du;
while(x>0){
    du=x%10;
    dao=dao*10+du;
    x=x/10;
}
return dao;
}

int main()
{   cout<<"Vui long nhap so: ";
    cin>>n;
    if(ktnt(sodao(n)))
        cout<<"So dao cua n la snt"<<endl;
            else
        cout << "So dao cua n ko la snt"<< endl;
    return 0;
}
