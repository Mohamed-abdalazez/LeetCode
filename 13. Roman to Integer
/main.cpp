class Solution
{
public:
  int romanToInt(string s)
  {
    int ans = 0;
    bool last = false;
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    if (s.size() == 1)
      return m[s[0]];
    for (int i = 0; i < s.size() - 1;)
    {
      if (m[s[i]] >= m[s[i + 1]])
      {
        ans += m[s[i]];
        i++;
      }
      else
      {
        ans += m[s[i + 1]] - m[s[i]];
        i += 2;
        last = true;
      }
    }
    ans = (m[s[s.size() - 2]] >= m[s[s.size() - 1]] ? ans + m[s[s.size() - 1]] : ans); //
    return ans;
  }
};
