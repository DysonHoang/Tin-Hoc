#include <bits/stdc++.h>

using namespace std;
int a[1000000];
bool bt(int x)
{
    int du;
    if(x<11) return 0;
    while(x>0)
    {
        du=x%10;
        x=x/10;
        if(x%10>=du) return 0;
    }
    return 1;
}
void in(){

}
int main()
{int dem=0;
int n;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(bt(a[i]))
        dem++;
}
    cout <<dem << endl;
    return 0;
}
