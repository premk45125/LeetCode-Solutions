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
    TreeNode* searchBST(TreeNode* root, int value) {
        if(root->val==value)
        return root;
        TreeNode* temp=root;
        while(temp!=NULL && temp->val != value){
            if(temp->val>value)
            temp=temp->left;
            else
            temp=temp->right;
        }
        
        return temp;
    }
};