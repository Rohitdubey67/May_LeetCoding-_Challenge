/*
Given a circular array C of integers represented by A, find the maximum possible sum of a non-empty subarray of C.

Here, a circular array means the end of the array connects to the beginning of the array.  (Formally, C[i] = A[i] when 0 <= i < A.length, and C[i+A.length] = C[i] when i >= 0.)

Also, a subarray may only include each element of the fixed buffer A at most once.  (Formally, for a subarray C[i], C[i+1], ..., C[j], there does not exist i <= k1, k2 <= j with k1 % A.length = k2 % A.length.)

Example 1:

Input: [1,-2,3,-2]
Output: 3
Explanation: Subarray [3] has maximum sum 3
Example 2:

Input: [5,-3,5]
Output: 10
Explanation: Subarray [5,5] has maximum sum 5 + 5 = 10
Example 3:

Input: [3,-1,2,-1]
Output: 4
Explanation: Subarray [2,-1,3] has maximum sum 2 + (-1) + 3 = 4
Example 4:

Input: [3,-2,2,-3]
Output: 3
Explanation: Subarray [3] and [3,-2,2] both have maximum sum 3
Example 5:

Input: [-2,-3,-1]
Output: -1
Explanation: Subarray [-1] has maximum sum -1
*/

/*
Time: O(n)
Space: O(1)
Concept used: max subarry sum (Kadane algo)
*/

int max_sum(vector<int>& a)
{
    int k,m,i,n=a.size();
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            k=a[i];
            m=a[i];
        }
        else
        {
            k+=a[i];
            if(k<a[i])
            k=a[i];
            m=max(k,m);
        }
    }
    return m;
}
    int maxSubarraySumCircular(vector<int>& a) {
         int k_sum=max_sum(a);
        int i,n=a.size();
         if(k_sum<0)
         return k_sum;
         else
         {
         int c_sum=0;
         for(i=0;i<n;i++)
         {
             c_sum+=a[i];
             a[i]=-a[i];
         }
         c_sum+=max_sum(a);
         c_sum=max(k_sum,c_sum);
         return c_sum;
         }
    }
