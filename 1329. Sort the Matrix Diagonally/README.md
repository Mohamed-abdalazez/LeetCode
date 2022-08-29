# 1329. Sort the Matrix Diagonally

Problem Link: https://leetcode.com/problems/sort-the-matrix-diagonally/


### The explanation:

 ```We can observe that in any matrix.```

Each cell represents ```i,j```      


             [ 0,0 0,1 0,2 ]                              [0 -1 -2]
    Matrix = [ 1,0 1,1 1,2 ] -> applying i - j   Matrix = [1  0 -1] -> We can observe that each diagonal has the same value.
             [ 2,0 2,1 2,2 ]                              [2  1  0]
             
#### So, we can map each (i-j) into a corresponding value and sort them using the map of priority_queue:

    Example 1:
             
             [3,3,1,1]             
    Matrix = [2,2,1,2]  
             [1,1,1,2]                    


                 [0,0 0,1 0,2 0,3]                            [0  -1 -2 -3]          
    MatrixIdxs = [1,0 1,1 1,2 1,3]  applying i - j   Matrix = [1   0 -1 -2] -> We can observe that each diagonal has the same value.
                 [2,0 2,1 2,2 2,3]                            [2   1  0 -1]


#### So, map of priority_queue "```map<int, priority_queue<int, vector<int>, greater<int>>> mpq;```" store the values as follows:

> Note that the priority queue could sort it internally when a value is pushed or popped from it.
>
> ```greater<int>``` to the smallest appear first.

The block of code that makes this:
```c++
map<int, priority_queue<int, vector<int>, greater<int>>> mpq;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        mpq[i - j].push(mat[i][j]);
      }
    }
```

     mpq[0] : 3,2,1
     mpq[-1]: 3,2,1
     mpq[-2]: 2,1
     mpq[1] : 2,1
     mpq[2] : 1
     mpq[-3]: 1
  
#### Then, return the top of each mpq[i - j] to Matrix[i][j] and remove it until finished!

  After Sorting the Matrix Diagonally:
             
             [1 1 1 1]             
    Matrix = [1 2 2 2]  
             [1 2 3 3]    
             
The block of code that makes this:
```c++
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        mat[i][j] = mpq[i - j].top();
        mpq[i - j].pop();
      }
    }
```
> **_`You can see the full code above in the main.cpp file.`_**
