#include <bits/stdc++.h>
#include<iostream>

using namespace std;
int n;
int main()
{ long long d=1;
    cin>>n>>x;
    for(int i=1; i<=n;i++)
        d=d*i*x;
    cout <<d;
    return 0;
}

