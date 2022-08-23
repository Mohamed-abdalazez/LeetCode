#include "bits/stdc++.h"

using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// dummy solution
class Solution
{
public:
  bool isPalindrome(ListNode *head)
  {
    string s, temp;
    while (head != NULL)
    {
      s += head->val;
      head = head->next;
    };
    temp = s;
    reverse(temp.begin(), temp.end());
    return (s == temp ? 1 : 0);
  }
};

int main()
{
  Solution obj;
  ListNode *first = NULL;
  ListNode *second = NULL;
  ListNode *third = NULL;
  first = new ListNode();
  second = new ListNode();
  third = new ListNode();

  first->val = 9;
  first->next = second;

  second->val = 6;
  second->next = third;

  third->val = 5;
  third->next = NULL;

  cout << obj.isPalindrome(first) << endl;
}
