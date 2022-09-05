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
