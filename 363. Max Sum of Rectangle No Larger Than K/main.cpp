#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int maxSumSubmatrix(vector<vector<int>> &matrix, int k)
  {
    int ans = INT_MIN, rows = matrix.size(), columns = matrix[0].size();
    for (int i = 0; i < columns; i++)
    {
      vector<int> cum_sum(rows);
      for (int j = i; j < columns; j++)
      {
        for (int k = 0; k < rows; k++)
        {
          cum_sum[k] += matrix[k][j];
        }
        set<int> exist = {0};
        int cur = 0;
        for (auto it : cum_sum)
        {
          cur += it;
          auto is = exist.lower_bound(cur - k);
          if (is != end(exist))
          {
            ans = max(ans, cur - *is);
          }
          exist.insert(cur);
        }
      }
    }
    return ans;
  }
};

int main()
{
  Solution obj;
  // Input: matrix = [[1,0,1],[0,-2,3]], k = 2
  vector<vector<int>> matrix(2);
  matrix[0].push_back(1);
  matrix[0].push_back(0);
  matrix[0].push_back(1);
  matrix[1].push_back(0);
  matrix[1].push_back(-2);
  matrix[1].push_back(3);
  cout << obj.maxSumSubmatrix(matrix, 2) << endl;
  return 0;
}
