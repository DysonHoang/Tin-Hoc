#include <bits/stdc++.h>

using namespace std;
float a,b;
float c,cv,dt;
int main()
{
    cin>>a>>b;
c=sqrt(a*a+b*b);
cv=a+b+c;
dt=(a*b)/2;
    cout << "chu vi cua hinh tam giac:"<<cv<< endl;
    cout << "dien tich cua hinh tam giac"<<dt<<endl;
    return 0;
}
