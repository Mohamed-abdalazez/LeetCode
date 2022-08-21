#include "bits/stdc++.h"

using namespace std;

/*
Input: target = 100, startFuel = 10, stations = [[10,60],[20,30],[30,30],[60,40]];
stations[i] = [positioni, fueli]

submit it in leetcode:

class Solution
{
public:
  int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
  {
    int n = stations.size(), curFuel = startFuel, i = 0, ans = 0;
    priority_queue<int> pq;
    while (curFuel < target)
    {
      for (; i < n && curFuel >= stations[i][0];)
      {
        pq.push(stations[i][1]);
        i++;
      }
      if (pq.empty())
        return -1;
      curFuel += pq.top();
      pq.pop();
      ans++;
    }
    return ans;
  }
};
*/

int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
{
  int n = stations.size(), curFuel = startFuel, i = 0, ans = 0;
  priority_queue<int> pq;
  while (curFuel < target)
  {
    for (; i < n && curFuel >= stations[i][0];)
    {
      pq.push(stations[i][1]);
      i++;
    }
    if (pq.empty())
      return -1;
    curFuel += pq.top();
    pq.pop();
    ans++;
  }
  return ans;
}

int main()
{
  int target, startFuel, n;
  cin >> target >> startFuel >> n;
  vector<vector<int>> stations(n);
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    stations[i].push_back(a);
    stations[i].push_back(b);
  }
  /*
  Input sample:
  100 10 4
  10 60
  20 30
  30 30
  60 40
  */
  cout << minRefuelStops(target, startFuel, stations) << endl;
  return 0;
}