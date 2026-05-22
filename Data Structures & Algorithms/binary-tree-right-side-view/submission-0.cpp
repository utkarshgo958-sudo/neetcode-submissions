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
    void solve(TreeNode*node,int level,vector<int>&rsv){
              if(node==NULL){return;}
        if(rsv.size()==level){
              rsv.push_back(node->val);
        }
        solve(node->right,level+1,rsv);
        solve(node->left,level+1,rsv);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>rsv;
        solve(root,0,rsv);
        return rsv;
    }
};
