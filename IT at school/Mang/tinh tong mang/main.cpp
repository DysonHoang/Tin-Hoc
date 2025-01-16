#include <bits/stdc++.h>

using namespace std;

int main()
{int a[10005],n;
int s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    cout << s << endl;
    return 0;
}
