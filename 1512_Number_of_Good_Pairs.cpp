//https://leetcode.com/problems/number-of-good-pairs/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>0)
            {
                count+=m[nums[i]];
            }
            m[nums[i]]++;
        }
        return count;
    }
};
