#include <bits/stdc++.h>

using namespace std;
int N;
float s=1;
int main()
{cout<<"Vui long nhap N: ";

    do{
        cin>>N;
        if(N<0||N>10000)
            cout<<"Moi ban nhap lai: ";
        }
    while (N<0||N>10000);
    for(int i=1;i<=N;i++)
    {
        s=s+1.0/i;
    }
    cout <<fixed<<setprecision(4)<<"Tong la: "<<s<< endl;
    return 0;
}
