#include <bits/stdc++.h>

using namespace std;
int a,b;
int tonguoc(int x){
    int t=0;
        for(int i=1;i<=x/2;i++)
            if(x%i==0)
                t=t+i;
return t+x;
}
int main()
{
    cout<<"A= ";
    cin>>a;
    cout<<"B= ";
    cin>>b;

    cout<<"tong cua tong uoc hai so la: "<<tonguoc(a)+ tonguoc(b)<< endl;
    return 0;
}
