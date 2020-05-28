/*
Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example 1:

Input: 2
Output: [0,1,1]
Example 2:

Input: 5
Output: [0,1,1,2,1,2]
Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.
*/

/*
Time: O(N)
Space: O(N)
*/

vector<int> countBits(int n) {
        int i,k;
        vector<int>v(n+1);
        v[0]=0;
        k=1;
        for(i=1;i<=n;i++)
        {
           if(k*2==i)
               k=k*2;
            v[i]=v[i-k]+1;
        }
        return v;
    }
    
