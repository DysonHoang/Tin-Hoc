#include <bits/stdc++.h>

using namespace std;
float a,b,c,s,cv,p;
int main()
{
    cin>>a>>b>>c;
    cv=a+b+c;
    p=cv/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Chu vi tam giac:" <<cv<< endl;
    cout <<"dien tich tam giac:"<<s<<endl;
    return 0;
}
