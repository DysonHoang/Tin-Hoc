#include <bits/stdc++.h>

using namespace std;
float a,b;
int main()
{
cin>>a;
cin>>b;

    if (a!=0 )
        cout<<"nghiem la: " <<(float)-b/a;
    if(a==0&&b==0)
        cout<<"pt vo so vo nghiem";
    if(a==0&&b!=0)
        cout<<"pt vo nghiem";
    return 0;
}

