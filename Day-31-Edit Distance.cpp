/*
Given two words word1 and word2, find the minimum number of operations required to convert word1 to word2.

You have the following 3 operations permitted on a word:

Insert a character
Delete a character
Replace a character
Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
*/

/*
Time : O(N^M)
Space: O(N*M)
concept: DP
*/

int minDistance(string a, string b) {
        int n=a.size(),i,j;
        int m=b.size();
        int t[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0&&j==0)
                    t[i][j]=0;
                else if(i==0)
                {
                    t[i][j]=j;
                }
                else if(j==0)
                {
                    t[i][j]=i;
                }
                else if(a[i-1]!=b[j-1])
                    t[i][j]=1+min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]));
                else
                    t[i][j]=t[i-1][j-1];
            }
        }
        return t[n][m];
    }
    
