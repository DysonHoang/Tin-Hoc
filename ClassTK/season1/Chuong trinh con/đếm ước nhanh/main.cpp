#include <bits/stdc++.h>

using namespace std;
int demuocnhanh(int x)
{
    int d=0;tg=sqrt(x);
    for(int i=1;i<=tg;i++)
        if(x%i==0)
            d+=2;
        if(tg+tg==x)
            d=d-1;
        return d;
}
int main()
{int x;
cin>>x;
    cout << demuocnhanh(x) << endl;
    return 0;
}
