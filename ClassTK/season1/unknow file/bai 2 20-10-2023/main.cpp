#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,d=05;
    cin>>n;
    for (int i=1;i<=n;i++)

        if(n%i==0)
        d++;
    cout << d << endl;
    return 0;
}
