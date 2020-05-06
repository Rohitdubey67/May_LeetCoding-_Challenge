/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2
*/

/*
Time: O(n)
Space: O(1)
*/

int majorityElement(vector<int>& a) {
        int count=0;
        int k;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
           if(count==0)
           {
               k=a[i];
               //count++;
           }
            if(a[i]==k)
            count++; 
            else
                count--;
        }
        return k;
    }
