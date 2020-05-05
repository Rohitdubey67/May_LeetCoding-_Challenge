/*
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
*/

/*
Time: O(n)
Space: O(26)=O(1)
*/

int firstUniqChar(string s) {
        unordered_map<char,int>m;
        int i;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)
                return i;
        }
        return -1;
    }
    
