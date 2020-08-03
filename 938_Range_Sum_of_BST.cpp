//https://leetcode.com/problems/range-sum-of-bst/
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
int rangesum(TreeNode* root,int L,int R,int &ans)
{
    if(root==NULL)
    {
        return ans;
    }
    if(root->val>=L && root->val<=R)
    {
        ans+=root->val;
    }
    rangesum(root->left,L,R,ans);
    rangesum(root->right,L,R,ans);
    return ans;
}
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int ans=0;
        return rangesum(root,L,R,ans);
    }
};
