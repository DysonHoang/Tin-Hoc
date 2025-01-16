#include<bits/stdc++.h>
using namespace std;
int kq[25];
bool use[25];
int n,dem=0;
bool ktnt(int x){
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        return 0;
    return 1;
    }
bool check()
{
    int d0=0,d1=0;
    for(int i=1;i<=n;i++)
        if(use[i]==0)
        {
            d0++;
        }
        else 
        d1++;
    if(ktnt(abs(d0-d1))&&ktnt(d1))
        dem++;
}
void gen(int pos)
{
    for(int val = 0; val <= 1; val++)
    {
        a[pos] = val;
        if(pos == n)
            check();
        else
            gen(pos + 1);
    }
}
int main()
{
    cin >> n;
    gen(1);
    cout << dem;
}