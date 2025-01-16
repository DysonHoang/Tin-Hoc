#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    long long x,y,k;
    cin>>x>>y>>k;
    long long total_money=0;
    int days=0;
    while(y>total_money)
    {
        days++;
        total_money+=x;
        
        if(days%6==1) total_money+=k;
    }   
    cout<< days <<endl;
}