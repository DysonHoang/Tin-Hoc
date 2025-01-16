#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{ cin>>n;
    long long d=1,s=0;
    for(int i=1;i<=n;i++)
    {
        d=d*i;
        s=s+d;
    }

    cout << s << endl;
    return 0;
}
