#include <bits/stdc++.h>

using namespace std;
int a,b;
int sodao(int x){
    int dao=0,du;
        while(x>0){
            du=x%10;
            dao=dao*10+du;
            x=x/10;
            d++
}
return dao;
}

int main()
{   cout<<"A= ";
    cin>>a;
    cout<<"B= ";
    cin>>b;
    cout <<"Tong so dao cua a va b la: "<< sodao(a)+sodao(b) << endl;
    return 0;
}
