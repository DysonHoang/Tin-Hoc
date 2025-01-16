#include <bits/stdc++.h>


using namespace std;
float a,b,c;
float cv,dt;
int main()
{
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b)
{
    int cv =a+b+c;
    float p= (float)cv/2;
    float dt= sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"chu vi:"<<cv<< endl;
    cout<<"dien tich la:;"<<dt;
}
    else
    cout << "ba so khong thanh tam giac" << endl;
    return 0;
}
