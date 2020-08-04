//https://leetcode.com/problems/n-ary-tree-preorder-traversal/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(root==NULL)
        {
            return v;
        }
        stack<Node*> s;
        s.push(root);
        while(s.empty()==false)
        {
            Node* temp=s.top();
            s.pop();
            v.push_back(temp->val);
            for(int i=temp->children.size()-1;i>=0;i--)
            {
                s.push(temp->children[i]);
            }
        }
        return v;
    }
};
