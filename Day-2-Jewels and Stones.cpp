/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
*/


/*
Time: O(size(s))
Space: O(size(s))
concept used: Hashing
*/

class Solution {
public:
    int numJewelsInStones(string p, string s) {
        unordered_map<char,int>m;
        int i,k;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
       k=0;
        for(i=0;i<p.size();i++)
        {
            k+=m[p[i]];
        }
        return k;
    }
};
