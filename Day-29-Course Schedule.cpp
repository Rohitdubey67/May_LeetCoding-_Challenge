/*
There are a total of numCourses courses you have to take, labeled from 0 to numCourses-1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?

 

Example 1:

Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
Explanation: There are a total of 2 courses to take. 
             To take course 1 you should have finished course 0. So it is possible.
Example 2:

Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take. 
             To take course 1 you should have finished course 0, and to take course 0 you should
             also have finished course 1. So it is impossible.
 */
 
 bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> g(n);
        vector<int> d(n, 0), bfs;
        for (auto& i : pre)
        {
            g[i[1]].push_back(i[0]);
            d[i[0]]++;
        }
        for (int i = 0; i < n; ++i) 
        {
            if (!d[i]) 
                bfs.push_back(i);
        }
        for (int i = 0; i < bfs.size(); ++i)
        {
            for (int j: g[bfs[i]])
            {
                if (--d[j] == 0)
                    bfs.push_back(j);
            }
        }
        return bfs.size() == n;
    }
    
