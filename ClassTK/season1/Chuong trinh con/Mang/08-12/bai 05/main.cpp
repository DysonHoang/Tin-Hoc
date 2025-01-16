#include <iostream>

using namespace std;
    int a[1000],n;
bool ktnt(int x){
if(x<2) return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
    return 0;
return 1;
}

int tongsnt(int x){
    int s=0;
for(int i=1;i<=sqrt(x);i++)
    if(ktnt(a[i]))
        s=s+a[i];
        cout<<s;
    return d;

}
bool cp(int x)
{
    int tg=sqrt(x);
           return tg*tg==x;

int indao (int x){

    cin>>n;
    for(int i=n;i>1;i--)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    cout << a[i]<<" ";

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
