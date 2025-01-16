#include <bits/stdc++.h>

using namespace std;
bool KTSHH(int x)
{
    int t=0;
        for(int i=1;i<=x/2;i++)
            if(x%i==0)
            t=t+i;
                return t==x;
}
int main()
{int x
    cin>>x
    cout << KTSHH(x) << endl;
    return 0;
}
