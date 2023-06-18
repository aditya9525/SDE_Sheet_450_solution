/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void preorder(TreeNode* o, TreeNode* c, TreeNode* T){
        if(c==NULL){
            return ;
        }

        if(c->val==T->val){
            ans=c;
        }
        preorder(o, c->left, T);
        preorder(o, c->right,T);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        preorder(original, cloned, target);
        return ans;
    }
};
