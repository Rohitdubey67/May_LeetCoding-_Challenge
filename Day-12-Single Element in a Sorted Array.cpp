/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

 

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: [3,3,7,7,10,11,11]
Output: 10
*/

/*
Time: O(logn)
space: O(1)
concept used: Binary search
*/

int singleNonDuplicate(vector<int>& a) {
        int i,j,n=a.size();
        i=0,j=n-1;
        while(i<j)
        {
            int m=i+(j-i)/2;
            if(m%2==0)
            {
                if(a[m]==a[m+1])
                    i=m+2;
                else
                    j=m;
            }
            else if(m%2==1)
            {
                if(a[m]==a[m-1])
                    i=m+1;
                else
                    j=m;
            }
        }
        return a[i];
    }
    
