class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int n = nums.size(), ans, mx = INT_MIN;
    map<int, int> vis;
    for (auto it : nums)
      vis[it]++;
    for (auto it : vis)
    {
      if (it.second > mx)
      {
        ans = it.first;
        mx = it.second;
      }
    }
    return ans;
  }
};
