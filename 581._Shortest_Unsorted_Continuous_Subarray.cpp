//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int arr_max[n];
        int arr_min[n];
        arr_max[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            arr_max[i]=max(arr_max[i-1],nums[i]);
        }
        arr_min[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            arr_min[i]=min(arr_min[i+1],nums[i]);
        }
        int start=0,end=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>arr_min[i])
            {
                start=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<arr_max[i])
            {
                end=i;
                break;
            }
        }
            cout<<start<<end;
        if(start>=end)
        {
            return 0;
        }
        else
        {
            return (end-start+1);
        }
    }   
};
