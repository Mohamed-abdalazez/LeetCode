#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
  {
    int rows = mat.size(), columns = mat[0].size();
    map<int, priority_queue<int, vector<int>, greater<int>>> mpq;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        mpq[i - j].push(mat[i][j]);
      }
    }

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        mat[i][j] = mpq[i - j].top();
        mpq[i - j].pop();
      }
    }
    return mat;
  }
};

int main()
{
  Solution obj;
  int n, m;
  cin >> n >> m;
  vector<vector<int>> mat(m);
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int val;
      cin >> val;
      mat[i].push_back(val);
    }
  }
  for (int i = 0; i < obj.diagonalSort(mat).size(); i++)
  {
    for (int j = 0; j < obj.diagonalSort(mat).size(); j++)
    {
      cout << obj.diagonalSort(mat)[i][j] << " ";
    }
    cout << "/n";
  }
  return 0;
}