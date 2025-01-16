#include <bits/stdc++.h>

using namespace std;
int n;
int tcs(int x)
{
    int t=0, du;
    while(x>0)
    {
        du=x%10;
        t=t+du;
        x=x/10;
    }
    return t;
}
bool bt(int x){
int du;
if(x<11) return 0;
while (x>0)
{
    du=x%10;
    x=x/10;
    if(x%10>=du) return 0;
}
return 1;
}

int main()
{cout<<"Vui long nhap so: ";
    cin>>n;
    if(bt(tcs(n)))
    cout << "Tong cac chu so la so bac thang" << endl;
        else
    cout << "Tong cac chu so ko la so bac thang"<<endl;
    return 0;
}
