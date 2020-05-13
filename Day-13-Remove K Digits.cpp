/*
Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

Note:
The length of num is less than 10002 and will be ≥ k.
The given num does not contain any leading zero.
Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
Example 3:

Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.
*/

/*
Time: O(N*K)
Space: O(1)
*/

 string removeKdigits(string s, int k) {
        if(s.size()<=k)
            return "0";
        int i;
        string p=s;
        while(k--)
        {
            i=0;
            while(i<p.size()-1&&p[i+1]>=p[i])
                i++;
            p.erase(i,1);
            while(p.size()>1&&p[0]=='0')
            p.erase(0,1);
            if(!p.size())
                return "0";
        }
        return p;
    }
    
