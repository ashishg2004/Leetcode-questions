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
int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        int maxx=max(left,right) + 1;
        return maxx;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;
        int op1=diameterOfBinaryTree(root->left);
        int op2=diameterOfBinaryTree(root->right);
        int op3=maxDepth(root->left)+maxDepth(root->right);
        int maxx=max(op1,max(op2,op3));
        return maxx;

    }
};