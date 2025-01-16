#include <bits/stdc++.h>

using namespace std;
long long a,b,c;
int main()

{
    cin>>a>>b>>c;

        if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
            cout<<"tam giac vuong";
        if((a*a+b*b>c*c)||(a*a+c*c>b*b)||(c*c+b*b>a*a))
            cout<<"tam giac tu";
        if ((a*a+b*b<c*c)||(a*a+c*c<b*b)||(c*c+b*b<a*a))
            cout<<"tam giac nhon";


    return 0;
}
