//https://leetcode.com/problems/valid-mountain-array/
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int flag=0;
        int si=0;
        if(A.size()==0)
        {
            return false;
        }
        if(A.size()==1)
        {
            return false;
        }
        for(int i=0;i<A.size()-1;i++)
        {
            if(si==1 && flag==0 && A[i]>A[i+1])
            {
                flag=1;
            }
            if(flag==0 && A[i]>=A[i+1])
            {
                return false;
            }
            si=1;
            if(flag==1 && A[i]<=A[i+1])
            {
                return false;
            }
        }
        if(flag==0)
        {
            return false;
        }
        return true;
    }
};
