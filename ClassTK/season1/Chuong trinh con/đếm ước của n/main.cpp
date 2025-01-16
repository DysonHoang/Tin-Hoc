#include <bits/stdc++.h>

using namespace std;
int demuoc(int n)
{
    int d=0;
    for (int i=1; i<=n/2; i++)
        if(n%i==0)
            d++;
    return d+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<demuoc(n);

}
