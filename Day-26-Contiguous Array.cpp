/*
Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

Example 1:
Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
Example 2:
Input: [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
*/

/*
Time: O(n)
space: O(n)
concept: change 0 into -1 and find longest subarray with o sum.
*/

 int findMaxLength(vector<int>& a) {
        int i,k=0,p=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(i=0;i<a.size();i++)
        {
            if(a[i]==0)
                a[i]=-1;
            k+=a[i];
            if(m.find(k)!=m.end())
            {
              p=max(p,i-m[k]); 
            }
            else
            m[k]=i;
        }
        return p;
    }
    
