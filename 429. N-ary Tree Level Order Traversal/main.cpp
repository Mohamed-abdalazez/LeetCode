#include "bits/stdc++.h"

using namespace std;

class Node
{
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val)
  {
    val = _val;
  }

  Node(int _val, vector<Node *> _children)
  {
    val = _val;
    children = _children;
  }
};

class Solution
{
public:
  vector<vector<int>> levelOrder(Node *root)
  {
    vector<vector<int>> ans;
    if (!root)
      return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
      int sz = q.size();
      vector<int> temp;
      while (sz--)
      {
        auto get = q.front();
        q.pop();
        temp.push_back(get->val);
        for (auto it : get->children)
          q.push(it);
      }
      ans.push_back(temp);
    }
    return ans;
  }
};

int main()
{
}