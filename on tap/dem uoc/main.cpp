#include <bits/stdc++.h>

using namespace std;
int demuoc(int x)
{
    int d=0;
    for(int i=1;i<=x/2;i++)
        if(x%i==0)
        d++;
        return d+1;
}
int main()
{int a;
cin>>a;
    cout << demuoc(a) << endl;
    return 0;
}
