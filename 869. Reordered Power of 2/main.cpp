#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool reorderedPowerOf2(int n)
  {
    string s = to_string(n);
    sort(s.begin(), s.end());
    /*
    why iterate to 30?
    - because 2 to the power of 30 = 1073741824;
    - And the Constraints in the problem is 1 <= n <= 1000000000;

    1073741824 So we need to search in this range 
    1000000000
    */
    for (int i = 0; i < 30; i++)
    {
      string temp = to_string((1 << i)); // (1 << i) == 2^i
      sort(temp.begin(), temp.end());
      if (temp == s)
        return true;
    }
    return false;
  }
};
int main()
{
  Solution obj;
  int n;
  cin >> n;
  cout << obj.reorderedPowerOf2(n) << endl;
}