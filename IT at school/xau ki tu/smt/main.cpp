#include <bits/stdc++.h>

using namespace std;

int main()
{long long a,b,c,d;
cin>>a>>b>>c>>d;
    long long ans; ans= min(min(a,b),min(c,d));
    cout << ans << endl;
    return 0;
}
