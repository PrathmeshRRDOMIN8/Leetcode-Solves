class Solution {
public:
    bool samesum(TreeNode *root, int k, int cs){
        cs+=root->val;
        if(root->left==nullptr && root->right==nullptr && cs == k){
            return true;
        }
        if(root->left!=nullptr && samesum(root->left,k,cs)){
            return true;
        }
        if(root->right!=nullptr && samesum(root->right,k,cs)){
            return true;
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int k) {
        int sum = 0;
        if(root!=nullptr)
        return samesum(root,k,sum);
        return false;
    }
};