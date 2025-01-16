#include <bits/stdc++.h>

using namespace std;
int a,b,d;
bool bt(int x){
int du;
if(x<11) return 0;
while (x>0)
{
    du=x%10;
    x=x/10;
    if(x%10>=du) return 0;
}
return 1;
}
int main()
{ cout<<"A= ";
    cin>>a;
cout<<"B= ";
    cin>>b;
    for(int i=a;i<=b;i++)
        if(bt(i))
            d++;
    cout << d << endl;
    return 0;
}
