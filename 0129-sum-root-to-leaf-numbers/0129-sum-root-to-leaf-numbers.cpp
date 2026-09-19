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
    int tree(TreeNode* root, int sum){
        if(root == NULL)
            return NULL;

        sum = sum*10 + root->val;
        if(root->left == NULL && root->right == NULL){
            return sum;
        }
        return tree(root->left,sum) + 
        tree(root->right,sum);
       
    }
    int sumNumbers(TreeNode* root) {
        return tree(root,0);
    }
};