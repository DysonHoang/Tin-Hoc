#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];

bool xdx(int x)
{
   int sodao=0,x1=x,du=0;
   while(x>0)
   {
    du=x%10;
    sodao=sodao*10+du;
    x=x/10;
   }
   return sodao==x1;
}

int main()
{
    map<ll, ll> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(xdx(n))
    cout<<"YES";
    else cout<<"NO";
}