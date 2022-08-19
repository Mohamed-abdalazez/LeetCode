class Solution
{
public:
  bool isPalindrome(int x)
  {
    string s;
    int n;
    s = to_string(x);
    n = s.size();
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
      if (s[i] != s[j])
        return false;
    }
    return true;
  }
};
