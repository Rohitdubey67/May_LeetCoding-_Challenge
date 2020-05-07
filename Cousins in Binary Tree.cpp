/*
In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

Input: root = [1,2,3,4], x = 4, y = 3
Output: false

Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
Output: true
*/

/*
Time: O(n)
Space: O(n)
concept used : DFS
*/


TreeNode*p_x;
    TreeNode*p_y;
    int h_x;
    int h_y;
    void solve(TreeNode*root,TreeNode*p,int x,int y,int d)
    {
        if(root==NULL)
            return;
        if(root->val==x)
        {
            p_x=p;
            h_x=d;
        }
        if(root->val==y)
        {
            p_y=p;
            h_y=d;
        }
        solve(root->left,root,x,y,d+1);
        solve(root->right,root,x,y,d+1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        p_x=NULL;
        p_y=NULL;
        h_x=-1;
        h_y=-1;
        solve(root,NULL,x,y,0);
        return h_x==h_y&&p_x!=p_y;
    }
