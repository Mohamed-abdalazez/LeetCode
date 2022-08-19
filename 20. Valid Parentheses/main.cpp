class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> st;
    map<char, char> ops;
    ops[')'] = '(';
    ops[']'] = '[';
    ops['}'] = '{';
    for (auto it : s)
    {
      if (st.empty())
        st.push(it);
      else
      {
        if (ops[it] == st.top())
        {
          st.pop();
        }
        else
        {
          st.push(it);
        }
      }
    }

    if (st.empty())
      return 1;
    return 0;
  }
};
