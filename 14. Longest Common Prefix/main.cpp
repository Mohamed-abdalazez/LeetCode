class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    string min = strs[0], ans = "";
    for (auto it : strs)
    {
      if (it.size() < min.size())
        min = it;
    }
    for (int i = 0; i < strs.size(); i++)
    {
      for (int j = 0; j < min.size(); j++)
      {
        if (strs[i][j] != min[j])
        {
          min[j] = ' ';
        }
      }
    }
    for (auto it : min)
      if (it != ' ')
        ans += it;
      else 
          break;
    return ans;
  }
};
