#include <bits/stdc++.h>

using namespace std;
int x,n;
int main()

{  long long s=1,d=0;
    cin>>x>>n;
    for (int i=0;i<=n;i++)
        s=pow(x, (2 * i + 1));
        d=d+s;
    cout << d << endl;
    return 0;
}
