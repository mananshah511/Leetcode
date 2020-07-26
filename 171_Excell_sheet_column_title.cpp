
//https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int temp=int(s[i]);
            ans+=(temp-64)*pow(26,n-1);
            n--;
        }
        return ans;
    }
};
