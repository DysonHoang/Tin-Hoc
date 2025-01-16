#include <bits/stdc++.h>

using namespace std;
int a,b,c,DTB;
int main()
{
    cin>>a>>b>>c;
    DTB=(a+b+c)/3;
    if (DTB>=8)
        cout << "hs gioi";
    if (DTB<8)
        cout <<"hs kha";
    if (DTB>=6.5&&DTB<8)
        cout <<"hs tb";
    if  (DTB>=3.5&&DTB<5)
        cout <<"hs yeu";
    if  (DTB<3.5)
        cout <<"kem";
    return 0;
}
