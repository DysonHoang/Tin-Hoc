#include <iostream>

using namespace std;
int n;
int main()
{ float d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        d=d+1.0/(2*i+1);
    cout << d << endl;
    return 0;
}
