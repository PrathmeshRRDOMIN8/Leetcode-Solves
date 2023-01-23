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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(target==NULL){
            return NULL;
        }
        if(cloned == NULL){
            return NULL;
        }
        if(cloned->val==target->val){
            return cloned;
        }
        TreeNode *newleftTreenode = getTargetCopy(original,cloned->left,target);
        TreeNode *newrightTreenode = getTargetCopy(original,cloned->right,target);
        if(newleftTreenode==NULL){
            return newrightTreenode;
        }
        else return newleftTreenode;
    }
};