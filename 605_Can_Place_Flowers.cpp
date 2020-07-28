//https://leetcode.com/problems/can-place-flowers/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int count=0;
        for(int i=0;i<f.size();i++)
        {
            if(f[i]!=1)
            {
                if(i==0)
                {
                    if((i+1)<f.size() && f[i+1]==0)
                    {
                        f[i]=1;
                        count++;
                    }
                    else if((i+1)>=f.size())
                    {
                        count++;
                    }
                }
                else if(i>0 && i<f.size()-1)
                {
                    if(f[i-1]==0 && f[i+1]==0)
                    {
                        f[i]=1;
                        count++;
                    }
                }
                else if(i==f.size()-1)
                {
                    if((i-1)>=0 && f[i-1]==0)
                    {
                        f[i]=1;
                        count++;
                    }
                    else if((i-1)<0)
                    {
                        count++;
                    }
                }
            }
                if(count>=n)
                {
                    return true;
                }
        }
        return false;
    }
};
