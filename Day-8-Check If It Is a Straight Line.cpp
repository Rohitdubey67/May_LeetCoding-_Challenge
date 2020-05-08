/*
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

Example 1:
Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Example 2:
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
*/

/*
Time: O(n)
Space: O(1)
Concept: a/b=e/f i.e a*f=b*e (slope of the line)
*/

bool checkStraightLine(vector<vector<int>>& c) {
        int i,j;
        int a,b,e,f;
        a=c[1][0]-c[0][0];
        b=c[1][1]-c[0][1];
        for(i=1;i<c.size()-1;i++)
        {
            e=c[i+1][0]-c[i][0];
            f=c[i+1][1]-c[i][1];
            if(a*f!=b*e)
                return false;
        }
        return true;
    }
    
    
