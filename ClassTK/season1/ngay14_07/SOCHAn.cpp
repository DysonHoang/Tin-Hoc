#include <bits/stdc++.h>
#define ll long long
#define Mx 1000000007
using namespace std;
int fibo[1000005];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  fibo[1] = 1;
  fibo[2] = 1;
  for (int i = 3; i <= 1e6; i++)
  {
    fibo[i] = (fibo[i - 1] % Mx + fibo[i - 2] % Mx) % Mx;
  }

  ll t;
  cin >> t;
  while (t--)
  {
    int a;
    cin >> a;
    cout << fibo[a] << "\n";
  }
  return 0;
}
