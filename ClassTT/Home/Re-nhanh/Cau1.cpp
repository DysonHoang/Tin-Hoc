#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int em=n/2,anh=n/2;
    if(n%2==0)
        cout<<em<<endl<<anh;
    else if(n%2==1)
        {
            anh+=1;
            cout<<em<<endl<<anh;
        }
}