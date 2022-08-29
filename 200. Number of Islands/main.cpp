#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  void dfs(vector<vector<char>> &grid, int i, int j, int rows, int columns)
  {
    if (i < 0 || i >= rows || j < 0 || j >= columns || grid[i][j] != '1')
      return;
    grid[i][j] = '#';
    dfs(grid, i + 1, j, rows, columns);
    dfs(grid, i, j + 1, rows, columns);
    dfs(grid, i - 1, j, rows, columns);
    dfs(grid, i, j - 1, rows, columns);
  }
  int numIslands(vector<vector<char>> &grid)
  {

    int rows = grid.size();
    int columns = grid[0].size();
    int cnt = 0;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        if (grid[i][j] == '1')
        {
          dfs(grid, i, j, rows, columns);
          cnt++;
        }
      }
    }
    return cnt;
  }
};

int main()
{
  Solution obj;
  int rows, col;
  cin >> rows >> col;
  vector<vector<char>> grid(rows);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      char val;
      cin >> val;
      grid[i].push_back(val);
    }
  }
  cout << obj.numIslands(grid) << endl;
}
