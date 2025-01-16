#include <bits/stdc++.h>

using namespace std;
int n;
int tcs(int x){
    int t=0, du;
    while(x>0)
    {
        du=x%10;
        t=t+du;
        x=x/10;
    }
    return t;
}
int nhap(){
cin>>n;
}

int main()
{
    nhap()
    if(cp(tcs(n)))
        cout>>tcs(n)
            else
        cout>>n;
    return 0;
}
