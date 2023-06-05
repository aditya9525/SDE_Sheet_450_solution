class Solution {
public:
    vector<int> ans;
    void preorder(TreeNode* root){
        
        if(root){
            ans.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};
