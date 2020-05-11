/*
An image is represented by a 2-D array of integers, each integer representing the pixel value of the image (from 0 to 65535).

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

At the end, return the modified image.

Example 1:
Input: 
image = [[1,1,1],[1,1,0],[1,0,1]]
sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
*/

/*
Time:O(n^2)
concept used: DFS
*/

 int n,m;
    void solve(vector<vector<int>>& a, int x, int y,int val,int c)
    {
        if(x<0||y<0||x>=n||y>=m)
            return ;
        if(a[x][y]!=val)
            return;
       // if(a[x][y]==c)
           // return;
        a[x][y]=c;
        solve(a,x,y-1,val,c);
        solve(a,x-1,y,val,c);
        solve(a,x,y+1,val,c);
        solve(a,x+1,y,val,c); 
    }
    vector<vector<int>> floodFill(vector<vector<int>>& a, int x, int y, int c) {
        n=a.size();
        if(n<=0)
            return a;
        m=a[0].size();
        if(a[x][y]!=c)
        solve(a,x,y,a[x][y],c);
        return a;
    }
