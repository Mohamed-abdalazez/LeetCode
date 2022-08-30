#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    map<int, deque<int>> mv;
    int n = matrix.size(), temp = n;
    temp--;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        mv[temp].push_back(matrix[i][j]);
      }
      temp--;
    }
    /*
        for (auto it : mv)
        {
          cout << "key: " << it.first << ", row: ";
          for (auto i : it.second)
          {
            cout << i << " ";
          }
          cout << endl;
        }
    */
    temp = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        matrix[j][i] = mv[temp].front();
        mv[temp].pop_front();
      }
      temp++;
    }
  }
};

int main()
{
  Solution obj;
  int n;
  cin >> n;
  vector<vector<int>> matrix(n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int val;
      cin >> val;
      matrix[i].push_back(val);
    }
  }
  obj.rotate(matrix);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}