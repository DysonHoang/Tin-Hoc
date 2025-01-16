#include <bits/stdc++.h>

using namespace std;
int x;
int ktraSNT(int x){
    if(x<2)
        return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return 0;
return 1;
}

int main()
{cout<<"X= ";
    cin>>x;
    if(ktraSNT(x))
        cout<<"X la so nguyen to";
    else
        cout<<"X ko la so nguyen to";

    return 0;
}
