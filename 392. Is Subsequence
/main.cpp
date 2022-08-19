class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    int S = s.size(), T = t.size();
    int idx = 0;
    for (int i = 0; i < T && idx < S; i++)
      if (s[idx] == t[i])
        idx++;
    return idx == S ? 1 : 0;
  }
};
