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
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot){return true;}
        if(!root){return false;}
        if(check(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
     bool check(TreeNode* node1,TreeNode* subRoot){
        if(!node1 && !subRoot){return true;}
        if(node1 && subRoot &&(node1->val==subRoot->val)){
            return check(node1->right,subRoot->right) &&  check(node1->left,subRoot->left);
        }
        return false;
     }
};
