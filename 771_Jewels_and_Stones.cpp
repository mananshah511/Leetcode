//https://leetcode.com/problems/jewels-and-stones/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> s;
        for(int i=0;i<S.length();i++)
        {
            s[S[i]]++;
        }
        int ans=0;
        for(int i=0;i<J.length();i++)
        {
            if(s[J[i]]>0)
            {
                ans+=s[J[i]]++;
            }
        }
        return ans;
    }
};
