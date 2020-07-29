//https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/

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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int ans=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        int level_ans;
        while(q.empty()==false)
        {
            int num_val=q.size();
            int temp_res=0;
            level++;
            while(num_val--)
            {   
                TreeNode* temp=q.front();
                q.pop();
                temp_res+=temp->val;
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
            if(temp_res>ans)
            {
                ans=temp_res;
                level_ans=level;
            }
        }
        return level_ans;
    }
};
