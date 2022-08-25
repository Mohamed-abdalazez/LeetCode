#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    map<char, int> vis, visI;
    int cnt = 0;
    for (auto it : magazine)
    {
      vis[it]++;
    }
    for (auto it : ransomNote)
    {
      if (visI[it] == 0)
      {
        int cnt = count(ransomNote.begin(), ransomNote.end(), it);
        visI[it] = 1;
        if (cnt > vis[it])
          return false;
      }
    }
    return true;
  }
};

int main()
{
  Solution obj;
  string ransomNote, magazine;
  cin >> ransomNote >> magazine;
  cout << obj.canConstruct(ransomNote, magazine) << endl;
}
