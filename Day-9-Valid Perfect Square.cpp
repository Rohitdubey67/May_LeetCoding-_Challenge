/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false
*/

/*
Time: O(logn)
Space: O(1);
Concept used: binary search
*/

bool isPerfectSquare(int n) {
        long i=1,j=n;
        while(i<=j)
        {
            long m=(i+j)/2;
            if(m*m==n)
                return 1;
            else if(m*m<n)
                i=m+1;
            else
                j=m-1;
        }
        return 0;
    }
