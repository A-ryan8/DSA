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
    int c=0;
    int n(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return n(root->left)+n(root->right)+1;
    }
    int cal(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lefv=cal(root->left);
        int rightv=cal(root->right);
        
        int sum=lefv+rightv+root->val;
        return sum;

    }
    void count(TreeNode* root){
        if(root==NULL){
            return;
        }
        if(root->val==(cal(root)/n(root))){
            c++;
        }
        count(root->left);
        count(root->right);

    }
    int averageOfSubtree(TreeNode* root) {
        count(root);
        return c;
    }
};