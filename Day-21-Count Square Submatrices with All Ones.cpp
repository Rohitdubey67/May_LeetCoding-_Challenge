/*
Given a m * n matrix of ones and zeros, return how many square submatrices have all ones.

 

Example 1:

Input: matrix =
[
  [0,1,1,1],
  [1,1,1,1],
  [0,1,1,1]
]
Output: 15
Explanation: 
There are 10 squares of side 1.
There are 4 squares of side 2.
There is  1 square of side 3.
Total number of squares = 10 + 4 + 1 = 15.
Example 2:

Input: matrix = 
[
  [1,0,1],
  [1,1,0],
  [1,1,0]
]
Output: 7
Explanation: 
There are 6 squares of side 1.  
There is 1 square of side 2. 
Total number of squares = 6 + 1 = 7.
*/

/* 
Time: O(n*m)
Space: O(1)
concept: DP
*/

int countSquares(vector<vector<int>>& a) {
        int i,j,k=0;
        for(i=0;i<a.size();i++)
        {
            for(j=0;j<a[0].size();j++)
            {
                if(i>0&&j>0)
                {
                    if(a[i][j]==1)
                    {
                        a[i][j]=1+min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]));
                    }
                }
                k+=a[i][j];
            }
            cout<<endl;
        }
        return k;
    }
    
