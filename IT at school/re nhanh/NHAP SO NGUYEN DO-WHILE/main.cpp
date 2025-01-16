#include <bits/stdc++.h>

using namespace std;
int a;
int main()
{cout<<"Vui long nhap so nguyen duong: ";

    do{
        cin>>a;
        if(a<0)
            cout<<"Moi ban nhap lai: ";
        }
    while (a<0);
    cout <<"so nguyen duong la: "<<a<< endl;
    return 0;
}
