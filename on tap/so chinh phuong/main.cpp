#include <bits/stdc++.h>

using namespace std;
bool scp(int x)
{
    int tg=sqrt(x);
    return tg*tg==x;
}
int main()
{
    int a;
    cin>>a;
    if(scp(a))
            cout<<"1";
        else
            cout<<"0";

        return 0;
}
