#include <bits/stdc++.h>

using namespace std;
int a[1000005];

int main()
{int n;
float s=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        s+=a[i];
    }
        cout<<s;
}

