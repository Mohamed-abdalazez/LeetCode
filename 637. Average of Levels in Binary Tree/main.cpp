#include "bits/stdc++.h"

using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  vector<double> averageOfLevels(TreeNode *root)
  {
    vector<double> ans;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
      int sz = q.size();
      double sum = 0;
      for (int i = 0; i < sz; i++)
      {
        auto it = q.front();
        q.pop();
        sum += it->val;
        if (it->left)
          q.push(it->left);
        if (it->right)
          q.push(it->right);
      }
      ans.push_back(sum / (double)sz);
    }
    return ans;
  }
};
int main()
{
}