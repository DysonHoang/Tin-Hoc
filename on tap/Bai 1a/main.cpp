#include <bits/stdc++.h>

using namespace std;

int UCLN(int A, int B) {
  int s;
    for(int i = 1; i <= A || i <= B; i++) {
     if( A%i == 0 && B%i == 0 )
      s = i;
   }
  return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout << UCLN(a,b) << endl;
    return 0;
}
