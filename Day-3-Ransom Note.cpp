/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

/*

Time O(s+p) -> O(max(s,p))
space O(26) -> O(1) i.e. constant space 
concept: character count

*/
class Solution {
public:
    bool canConstruct(string s, string p) {
        int i;
        int a[26]={0};
        int b[26]={0};
        /*count each char's frequancy in 1st string */
        for(i=0;i<s.size();i++)
            a[s[i]-'a']++;
        /* count each char's frequancy in 1st string */
        for(i=0;i<p.size();i++)
            b[p[i]-'a']++;
        for(i=0;i<26;i++)
        { 
          // if any char's frequncy in 1st string is greater than 2nd string's char 
            if(a[i]>b[i])
                return 0;
        }
        return 1;
    }
};
