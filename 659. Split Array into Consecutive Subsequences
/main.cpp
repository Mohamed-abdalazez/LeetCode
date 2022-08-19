/*
class Solution
{
public:
  bool isPossible(vector<int> &nums)
  {
    map<int, int> freq, need;
    for (auto it : nums)
    {
      freq[it]++;
    }
    for (auto it : nums)
    {
      if (freq[it] == 0)
      {
        continue;
      }
      if (need[it] > 0)
      {
        need[it]--;
        freq[it]--;
        need[it + 1]++;
      }
      else if (freq[it] > 0 && freq[it + 1] > 0 && freq[it + 2] > 0)
      {
        freq[it]--;
        freq[it + 1]--;
        freq[it + 2]--;
        need[it + 3]++;
      }
      else
      {
        return 0;
      }
    }

    return 1;
  }
};
*/

// function and main

#include "bits/stdc++.h"

using namespace std;

bool isPossible(vector<int> &nums)
{
  map<int, int> freq, need;
  for (auto it : nums)
  {
    freq[it]++;
  }
  for (auto it : nums)
  {
    if (freq[it] == 0)
    {
      continue;
    }
    if (need[it] > 0)
    {
      need[it]--;
      freq[it]--;
      need[it + 1]++;
    }
    else if (freq[it] > 0 && freq[it + 1] > 0 && freq[it + 2] > 0)
    {
      freq[it]--;
      freq[it + 1]--;
      freq[it + 2]--;
      need[it + 3]++;
    }
    else
    {
      return 0;
    }
  }

  return;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &it : a)
    cin >> it;
  cout << isPossible(a) << endl;
}