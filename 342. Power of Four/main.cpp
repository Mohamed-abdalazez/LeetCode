#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool isPowerOfFour(int n)
  {
    if (n == 1)
      return 1;
    while (n > 4)
    {
      if (n % 4 != 0)
        return 0;
      n /= 4;
    }
    return (n == 4 ? 1 : 0);
  }
};

int main()
{
  Solution obj;
  int n;
  cin >> n;
  cout << obj.isPowerOfFour(n) << endl;
  return 0;
}
