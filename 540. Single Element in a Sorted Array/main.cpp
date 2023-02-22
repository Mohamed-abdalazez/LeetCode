#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int singleNonDuplicate(vector<int> &nums)
  {
    int n = nums.size();
    map<int, int> vis;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
      vis[nums[i]]++;
      vis[nums[j]]++;
      if (nums[i] != nums[i + 1] && vis[nums[i]] == 1)
      {
        return nums[i];
      }
      if (nums[j] != nums[j - 1] && vis[nums[j]] == 1)
      {
        return nums[j];
      }
    }
    return nums[n >> 1];
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int> nums(n);
  for (auto &i : nums)
    cin >> i;
  Solution obj;
  cout << obj.singleNonDuplicate(nums) << endl;
}
