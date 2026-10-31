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
    void inorder(TreeNode* node,vector<int>&nums){
        if(node==nullptr)return ;
        inorder(node->left,nums);
        nums.push_back(node->val);
        inorder(node->right,nums);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int>nums;
        inorder(root,nums);

        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]>k){
                j--;
            }else if(nums[i]+nums[j]<k){
                i++;
            }else{
                return true;
            }
        }
        return false;
    }
};