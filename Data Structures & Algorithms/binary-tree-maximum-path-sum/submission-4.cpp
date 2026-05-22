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
            sumCalc(root,maxi);
            return maxi;
    }

    int sumCalc(TreeNode* node,int& maxi){

        if(!node){return 0;}
           int sr=max(0,sumCalc(node->right,maxi));
           int sl=max(0,sumCalc(node->left,maxi));
           maxi=max(maxi,node->val+sr+sl);
           return max(sr,sl)+node->val;

    }

};
