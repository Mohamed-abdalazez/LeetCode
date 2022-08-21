#include "bits/stdc++.h"

using namespace std;

// I think there is a better solution.
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    set<int> st;
    for (auto it : nums)
      st.insert(it);
    nums.clear();
    for (auto it : st)
      nums.push_back(it);
    return st.size();
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
  cout << obj.removeDuplicates(nums) << endl;
}