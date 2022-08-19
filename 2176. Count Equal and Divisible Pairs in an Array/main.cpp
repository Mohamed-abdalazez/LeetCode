class Solution
{
public:
  int countPairs(vector<int> &nums, int k)
  {
    int ans = 0;
    map<int, vector<int>> idx;
    for (int i = 0; i < nums.size(); i++)
    {
      idx[nums[i]].push_back(i);
    }
    for (auto it : idx)
    {
      for (int i = 0; i < it.second.size(); i++)
      {
        for (int j = 0; j < it.second.size(); j++)
        {
          if (it.second[i] != it.second[j])
          {
            if (((it.second[i] * it.second[j]) % k) == 0)
            {
              ans++;
            }
          }
        }
      }
    }

    return (ans >> 1);
  }
};
