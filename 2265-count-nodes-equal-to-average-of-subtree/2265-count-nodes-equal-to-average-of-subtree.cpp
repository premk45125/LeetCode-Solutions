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
    void find(TreeNode* root,int &total,int &sum,int &count){
        int lsum=0;
        int lcount=0;
        if(root->left){
            find(root->left,total,sum,count);
            lsum=sum;
            lcount=count;
            sum=0;
            count=0;

        }
        int rsum=0;
        int rcount=0;
        if(root->right){
            find(root->right,total,sum,count);
            rsum=sum;
            rcount=count;
             sum=0;
            count=0;

        }
        if((lsum+rsum+root->val)/(1+lcount+rcount)==root->val)
        total++;
        sum = root->val + lsum+rsum;
        count=lcount+rcount+1;
        return;
    }
    int averageOfSubtree(TreeNode* root) {
        int total=0;
        int sum=0;
        int count=0;
        TreeNode* temp=root;
        find(temp,total,sum,count);
        return total;
        
    }
};