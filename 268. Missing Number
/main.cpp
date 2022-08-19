class Solution {
public:
int missingNumber(vector<int> &nums)
{
  int sum = 0, mx = -999999;
  bool zero = false;
  for (auto it : nums)
  {
    sum += it;
    if (it > mx)
      mx = it;
    if (it == 0)
      zero = true;
  }
  if (((mx * (mx + 1)) / 2) - sum == 0 && !zero)
    return 0;
  return ((mx * (mx + 1)) / 2) - sum == 0 ? mx + 1 : ((mx * (mx + 1)) / 2) - sum;
}
}; 
