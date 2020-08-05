//https://leetcode.com/problems/degree-of-an-array/
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int freq=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>freq)
            {   v.clear();
                freq=m[nums[i]];
                m[nums[i]]=0;
                v.push_back(nums[i]);
            }
            if(m[nums[i]]==freq)
            {
                v.push_back(nums[i]);
            }
        }
        int res=INT_MAX;
        for(int i=0;i<v.size();i++)
        {   
            int l;
            int r;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==v[i])
                {
                    l=j;
                    break;
                }
            }
            for(int j=nums.size()-1;j>=0;j--)
            {
                if(nums[j]==v[i])
                {
                    r=j;
                    break;
                }
            }
            cout<<l<<" "<<r<<endl;
            res=min(res,r-l+1);
        }
        return res;
    }
    
};
