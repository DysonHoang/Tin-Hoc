#include <bits/stdc++.h>
using namespace std;
int a,b;
float c,cv;
float dt;

int main()
{ cin>>a>>b;
    c= sqrt(a*a+b*b);
       cv= a+b+c;
           dt= (a*b)/2;
               cout << "chu vi:"<<cv<<endl;
    cout<< "dien tich:"<<dt<<endl;
    return 0;
}
