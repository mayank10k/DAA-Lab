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
    int ans=0;
public:
    pair<int,int> helper(TreeNode* node){
        if(node==nullptr)return {0,0};

        auto [leftSum,leftCount]=helper(node->left);
        auto [rightSum,rightCount]=helper(node->right);

        int sum=leftSum+rightSum+node->val;
        int count=rightCount+leftCount+1;

        if(sum/count==node->val)ans++;
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};