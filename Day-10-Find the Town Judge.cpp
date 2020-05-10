/*
In a town, there are N people labelled from 1 to N.  There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

The town judge trusts nobody.
Everybody (except for the town judge) trusts the town judge.
There is exactly one person that satisfies properties 1 and 2.
You are given trust, an array of pairs trust[i] = [a, b] representing that the person labelled a trusts the person labelled b.

If the town judge exists and can be identified, return the label of the town judge.  Otherwise, return -1.

 

Example 1:

Input: N = 2, trust = [[1,2]]
Output: 2
Example 2:

Input: N = 3, trust = [[1,3],[2,3]]
Output: 3
Example 3:

Input: N = 3, trust = [[1,3],[2,3],[3,1]]
Output: -1
Example 4:

Input: N = 3, trust = [[1,2],[2,3]]
Output: -1
Example 5:

Input: N = 4, trust = [[1,3],[1,4],[2,3],[2,4],[4,3]]
Output: 3
*/

/*
Time: O(n)
Space: O(1)
*/

int findJudge(int n, vector<vector<int>>& a) {
        int p[n],i;
        fill(p,p+n,0);
        for(i=0;i<a.size();i++)
        {
                p[a[i][0]-1]-=1;
                p[a[i][1]-1]+=1;
        }
        for(i=0;i<n;i++)
        {
            if(p[i]==n-1)
                return i+1;
        }
        return -1;
    }
