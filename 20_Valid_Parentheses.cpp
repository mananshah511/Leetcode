//https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0;i<s.length();i++)
        {
            if(p.empty()==true)
            {
                p.push(s[i]);
            }
            else if(p.top()=='(' && s[i]==')')
            {
                p.pop();
            }
            else if(p.top()=='[' && s[i]==']')
            {
                p.pop();
            }
            else if(p.top()=='{' && s[i]=='}')
            {
                p.pop();
            }
            else
            {
                p.push(s[i]);
            }
        }
        if(p.empty()==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
