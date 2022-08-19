class Solution
{
public:
  int removeCoveredIntervals(vector<vector<int>> &intervals)
  {
    int n, ans;
    set<vector<int>> temp;
    for (auto it : intervals)
      temp.insert(it);
    intervals.clear();
    for (auto it : temp)
      intervals.push_back(it);
    n = ans = intervals.size();
    pair<int, int> LR;
    LR.first = intervals[0][0];
    LR.second = intervals[0][1];
    // cout << LR.first << " " << LR.second << endl;
    for (int i = 1; i < n; i++)
    {
      // cout << LR.first << " " << LR.second << endl;
      if ((intervals[i][0] >= LR.first && intervals[i][0] <= LR.second) && ((intervals[i][1] <= LR.second && intervals[i][1] >= LR.first)))
      {
        ans--;
      }
      else if ((intervals[i][0] <= LR.first) && (intervals[i][1] >= LR.second))
      {
        ans--;
        LR.first = intervals[i][0];
        LR.second = intervals[i][1];
      }
      else
      {
        LR.first = intervals[i][0];
        LR.second = intervals[i][1];
      }
    }
    return ans;
  }
};
