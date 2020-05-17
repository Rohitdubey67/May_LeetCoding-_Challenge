/*
Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

The order of output does not matter.

Example 1:

Input:
s: "cbaebabacd" p: "abc"

Output:
[0, 6]

Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
Example 2:

Input:
s: "abab" p: "ab"

Output:
[0, 1, 2]

Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
*/

/*
Time: O(size(s))
space: O(1)
concept: sliding window
*/

vector<int> findAnagrams(string s, string p) {
        int n=s.size(),m=p.size(),i;
        vector<int>ans;
        int a[26]={0};
        for(i=0;i<m;i++)
        {
           a[p[i]-'a']++; 
        }
        int left=0,right=0,count=m;
        while(right<n)
        {
            if( a[s[right++]-'a']-- >= 1)
            {
                count--;
            }
            if(count==0)
            {
                ans.push_back(left);
            }
            if(right-left==m && a[s[left++]-'a']++>=0)
                count++;
        }
        return ans;
    }
    
