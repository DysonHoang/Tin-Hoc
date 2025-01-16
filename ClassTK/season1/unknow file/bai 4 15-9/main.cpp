#include <bits/stdc++.h>

using namespace std;
float a,b,c;
int main()
{
    cin>>a>>b>>c;
    if (a+b>c&&b+c>a&&c+a>b)
    cout << "3 so cs the tao thanh tam giac" << endl;
    else
    cout << "3 so ko the tao thanh tam giac" << endl;
    return 0;
}
