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
      void help(vector<vector<int>>& ans, vector<int>& temp, TreeNode* root) {
        if (root == NULL) {
            return;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int x = q.size();

            for (int i = 0; i < x; i++) {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }

            ans.push_back(temp); 
            temp.clear(); 
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(ans,temp,root);

        return ans;
    }
};