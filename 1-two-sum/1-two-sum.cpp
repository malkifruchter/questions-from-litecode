class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        for(int i=0;i<nums.size();i++)
        {
          for(int j=0;j<nums.size()-1;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                result[0]=i;
                result[1]=j;
                break;
        }  
        }
             }
        return result;
    }
};