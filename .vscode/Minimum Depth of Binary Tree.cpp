class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int leftdepth = minDepth(root->left);
        int rightdepth = minDepth(root->right);
        if(leftdepth !=0 && rightdepth!=0)
        return min(leftdepth,rightdepth)+1;
        else return leftdepth==0? rightdepth+1: leftdepth+1;
    }
};