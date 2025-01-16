#include <bits/stdc++.h>

using namespace std;
int r,a;
float dtHT,dtHV;
int main()
{
    cin >>r;
    a = 2*r;
    dtHT= r*r*3,1416;
    dtHV= a*a;
    cout << "dt hinh tron la:" << dtHT << endl;
    cout << "dt hinh vuong la:" << dtHV << endl;
    cout << "dt hinh gach cheo la" << dtHV-dtHT <<endl;
    return 0;
}
