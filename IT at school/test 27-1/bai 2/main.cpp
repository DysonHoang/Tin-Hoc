#include <bits/stdc++.h>

using namespace std;
int UCLN(int a, int b){
if(a==0||b==0)
return a+b;
while(a!=b){
    if(a>b){
    a=a-b;
    }
    else{
    b=b-a;
}
}
return a;
}
int main()
{int a,b;
int d=UCLN(a,b);
float s;
cin>>a>>b;
s=(a/d)*(b/d);
    cout << s << endl;
    return 0;
}
