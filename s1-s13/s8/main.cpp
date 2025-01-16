#include <bits/stdc++.h>

using namespace std;
int x;
int ktraSBT(int n){
int du;
if(n<=11)
    return 0;
while(n>0)
{
    du=n%10;
    n=n/10;
    if(n%10>=du)
        return 0;
}
    return 0;
}
int main()
{cout<<"X= ";
    cin>>x;
    if(ktraSBT(x))
        cout<<"x la SBT";
    else
        cout<<"x ko la SBT";
    return 0;
}
