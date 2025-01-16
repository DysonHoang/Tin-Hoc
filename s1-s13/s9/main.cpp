#include <bits/stdc++.h>

using namespace std;
int a,b,d;
bool ktnt(int x){
if(x<2)
    return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
    return 0;
return 1;
}

int main()
{ cout<<"A= ";
    cin>>a;
cout<<"B= ";
    cin>>b;
    for(int i=a;i<=b;i++)
        if(ktnt(i))
            d++;
    cout << d << endl;
    return 0;
}
