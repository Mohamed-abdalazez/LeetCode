#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
  }
};

int main()
{
  Solution obj;
  int n, target;
  cin >> n >> target;
  vector<int> nums(n);
  for (auto &it : nums)
    cin >> it;

  cout << obj.search(nums, target) << endl;
}