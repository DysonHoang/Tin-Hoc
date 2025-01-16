#include <iostream>

using namespace std;
int x;
int main()
{   cout<<"X= ";
        cin>>x;
    float S=0,tu=1,mau=1,n;
    cout<<"N= ";
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        tu=tu*x*x;
        mau=mau*i*(i
                   -1);
        S=S+1.0*tu/mau;
    }
    cout <<"S= "<<S<< endl;
    return 0;
}
