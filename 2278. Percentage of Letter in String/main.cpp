class Solution {
public:
int percentageLetter(string s, char letter)
{
  map<char, int> vis;
  for (auto it : s)
    vis[it]++;
  int ans = (double) vis[letter] / s.size() * 100;
  return ans;
}

}; 
