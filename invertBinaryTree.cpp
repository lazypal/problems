/**
 * @rohit
 */
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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> s;
        if(root != nullptr) {
            s.push(root);
            while(!s.empty()) {
                TreeNode* temp = s.top();
                s.pop();

                TreeNode* t = temp->left;
                temp->left = temp->right;
                temp->right = t;

                if(temp->left != nullptr) {
                    s.push(temp->left);
                }
                if(temp->right != nullptr) {
                    s.push(temp->right);
                }
            }
        }
        return root;
    }
};