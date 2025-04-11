/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxx(root,maxi);
        return maxi;
    }
    int maxx(TreeNode* root,int& maxi)
    {
       if(root==NULL)
       return 0;
       int leftsum= max(0,maxx(root->left,maxi));
       int rightsum= max(0,maxx(root->right,maxi));
       maxi=max(maxi,root->val+leftsum+rightsum);
       return max(leftsum,rightsum)+root->val;
    }
};