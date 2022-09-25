#include "bits/stdc++.h"

using namespace std;

class MyCircularQueue
{
public:
  int *arr;
  int front;
  int back;
  int sz;
  MyCircularQueue(int k)
  {
    arr = new int[k];
    front = back = -1;
    sz = k;
  }

  bool enQueue(int value)
  {
    if (isFull())
      return false;
    if (isEmpty())
      front = 0;
    back = (back + 1) % sz;
    arr[back] = value;
    return true;
  }

  bool deQueue()
  {
    if (isEmpty())
      return false;
    if (front == back)
      front = back = -1;
    else
      front = (front + 1) % sz;
    return true;
  }

  int Front()
  {
    if (isEmpty())
      return -1;
    return arr[front];
  }

  int Rear()
  {
    if (isEmpty())
      return -1;
    return arr[back];
  }

  bool isEmpty()
  {
    return front == -1 ? true : false;
  }

  bool isFull()
  {
    return (((back + 1) % sz) == front ? true : false);
  }
};

int main()
{
  int k = 3;
  MyCircularQueue *obj = new MyCircularQueue(k);
  bool param_1 = obj->enQueue(1);
  bool param_2 = obj->deQueue();
  int param_3 = obj->Front();
  int param_4 = obj->Rear();
  bool param_5 = obj->isEmpty();
  bool param_6 = obj->isFull();
  cout << param_1 << "\n"
       << param_2 << "\n"
       << param_3 << "\n"
       << param_4 << "\n"
       << param_5 << "\n"
       << param_6 << "\n";
  return 0;
}
