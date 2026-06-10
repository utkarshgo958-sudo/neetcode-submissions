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
public:int ans=0;
    void summ(TreeNode* root,int sum){
        if(!root)return;
        sum=sum*10 + root->val;
        if(!root->left && !root->right){
            ans+=sum;
        }
            summ(root->right,sum);
            summ(root->left,sum);
    }
    int sumNumbers(TreeNode* root) {
        summ(root,0);
        return ans;
    }
};