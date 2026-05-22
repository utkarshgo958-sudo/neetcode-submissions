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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL){return "";}
        q.push(root);
        string s="";
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){s.append("#,");}
            else{
                s.append(to_string(curr->val)+',');
            }
            if(!curr==NULL){
                q.push(curr->left);
                q.push(curr->right);
            }

        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0){return NULL;}
        stringstream sr(data);
        string s;
        getline(sr,s,',');
        TreeNode* root=new TreeNode(stoi(s));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* root=q.front();
            q.pop();
              getline(sr,s,',');
              if(s=="#"){
                root->left==NULL;
              }
            else{
               TreeNode* leftNode=new TreeNode(stoi(s));
                root->left=leftNode;
                q.push(leftNode);
            }
              getline(sr,s,',');
              if(s=="#"){
                root->right==NULL;
              }
              else{
                TreeNode* rightNode=new TreeNode(stoi(s)); 
             root->right=rightNode;
             q.push(rightNode);                      
              }

        }
return root;
    }
};
