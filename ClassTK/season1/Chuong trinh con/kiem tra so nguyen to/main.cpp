#include <iostream>

using namespace std;
bool KTSNT(int x)
{
    for (inti=1;i<=x/2;i++)
        if(x%2==0)
            d++;
    if(d==2)
        return 1;
    else
        return 0;
}
int main()
{
    int x;
    cin>>x;
    cout << KTSNT(x) << endl;
    return 0;
}
