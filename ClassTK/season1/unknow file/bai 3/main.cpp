#include <bits/stdc++.h>

using namespace std;
int a,b,c,cv,dt;
int main()
{ cin >>a>>b;
c= sqrt(a*a+b*b);
cv= a+b+c;
dt= (a*b)/2;
    cout << "chieu dai con lai la :"  <<c<< endl;
    cout << "chu vi cua tam giac:"<<cv<< endl;
    cout << "dien tich cua tam giac:"<<dt<< endl;
    return 0;
}
