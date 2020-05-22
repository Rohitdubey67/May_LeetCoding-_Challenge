/*
Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input:
"cccaaa"

Output:
"cccaaa"

Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input:
"Aabb"

Output:
"bbAa"

Explanation:
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
*/

/*
Time: O(n)
space: O(256) ->O(1)
concept: unordered_map and comparison based sorting 
*/

string frequencySort(string s) {
        if(s.size()<2)
            return s;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        sort(s.begin(),s.end(),[&](char a, char b){
            if(m[a]!=m[b])
            return m[a]>m[b];
        return a<b;
        });
        return s;
    }
    
