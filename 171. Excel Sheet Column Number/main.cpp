class Solution
{
public:
  int titleToNumber(string columnTitle)
  {
    map<char, int> alph;
    int j = 1, ans = 0;
    for (char i = 'A'; i <= 'Z'; i++, j++)
    {
      alph[i] = j;
    }
    if (columnTitle.size() == 1)
      return alph[columnTitle[0]];
    for (int i = 0; i < columnTitle.size(); i++)
    {
      // cout << ans << " -> ";
      ans = ans * 26 + (alph[columnTitle[i]]);
      // cout << ans << "\n";
    }
    return ans;
  }
};
