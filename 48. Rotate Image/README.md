# 48. Rotate Image

Problem Link: https://leetcode.com/problems/rotate-image/


**First Initialize ```map<int, deque<int>> mv;```to map each row, from zero to n - 1:-**

```
map<int, deque<int>> mv;
    int n = matrix.size(), temp = n;
    temp--;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        mv[temp].push_back(matrix[i][j]);
      }
      temp--;
    }
```

**Example:-** 
		
	0 7 8 9 
	1 4 5 6 
	2 1 2 3

	for (auto it : mv)
	{
      cout << "key: " << it.first << ", row: ";
      for (auto i : it.second)
      {
        cout << i << " ";
      }
      cout << endl;
    }
	
	The output from map<int, deque<int>> mv; is:
	
	key: 0, row: 7 8 9 
	key: 1, row: 4 5 6 
	key: 2, row: 1 2 3 
	

**Then, Iterate once again on the matrix column by column as follows:**

1. assign the first value in deque in current cell.
2. pop this value from deque.


		temp = 0;
		for (int i = 0; i < n; i++)
		{
		  for (int j = 0; j < n; j++)
		  {
			matrix[j][i] = mv[temp].front();
			mv[temp].pop_front();
		  }
		  temp++;
		}

> **_`You can see the full code above in the main.cpp file.`_**
