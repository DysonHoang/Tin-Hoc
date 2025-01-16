#include <iostream>

using namespace std;
int n,x;
int main()
{ float d=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        d+=1.0/(i*x*(i+1));
    cout << d << endl;
    return 0;
}
