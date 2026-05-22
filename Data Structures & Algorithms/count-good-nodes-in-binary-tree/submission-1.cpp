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
    int goodNodes(TreeNode* root) {
        return df(root,root->val);
    }
    int df(TreeNode* node,int maxval){
        if(!node){return 0;}
        int res=(node->val>=maxval)?1:0;
        maxval=max(maxval,node->val);
        res+=df(node->right,maxval);
        res+=df(node->left,maxval);
        return res;
    }
};
