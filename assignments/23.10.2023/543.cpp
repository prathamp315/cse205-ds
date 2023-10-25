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
    int help(TreeNode* root,int& dia){
        if(root==NULL)return 0;
        int lh=help(root->left,dia);
        int rh=help(root->right,dia);
        dia=max(dia,(lh+rh));

        return max(lh,rh)+1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int dia=0;
        help(root,dia);
        return dia;



    }
};