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
  int cnt = 0;
  void dfs(TreeNode *node, int mxNow)
  {
    if (!node)
      return;
    if (node->val >= mxNow)
    {
      cnt++;
      mxNow = node->val;
    }
    dfs(node->left, mxNow);
    dfs(node->right, mxNow);
  }
  int goodNodes(TreeNode *root)
  {
    dfs(root, root->val);
    return cnt;
  }
};
