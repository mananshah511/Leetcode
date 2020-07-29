//https://leetcode.com/problems/find-the-town-judge/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        map<int,int> id;
        map<int,int> od;
        for(int i=0;i<trust.size();i++)
        {
            for(int j=0;j<trust[i].size();j++)
            {
                if(j==0)
                {
                    od[trust[i][j]]++;
                }
                else
                {
                    id[trust[i][j]]++;
                }
            }
        }
        for(int i=1;i<=N;i++)
        {
            if(id[i]==N-1 && od[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};
