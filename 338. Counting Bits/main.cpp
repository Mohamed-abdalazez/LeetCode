class Solution
{
public:
  vector<int> countBits(int n)
  {
    vector<int> ansi;
    for (int i = 0; i <= n; i++)
    {
      int ans = 0, num = i;
      while (num != 0)
      {
        ans += num % 2;
        //cout << ans << endl;
        num /= 2;
      }
      ansi.push_back(ans);
    }
    return ansi;
  }
};
