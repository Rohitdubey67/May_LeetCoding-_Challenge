/*

Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.

 

Example 1:

Input: s1 = "ab" s2 = "eidbaooo"
Output: True
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input:s1= "ab" s2 = "eidboaoo"
Output: False
 
*/

/*
Time: O(size(p)
space: O(1)
concept:sliding window
*/

 bool checkInclusion(string s, string p) {
        int i,n,m;
        n=s.size();
        m=p.size();
        int a[26]={0};
        for(i=0;i<n;i++)
            a[s[i]-'a']++;
        int left=0,right=0,count=n;
        while(right<m)
        {
          if(a[p[right++]-'a']-->=1)
          {
              count--;
          }
          if(count==0)
              return true;
            if(right-left==n && a[p[left++]-'a']++>=0)
                count++;
        }
        return false;
    }
    
