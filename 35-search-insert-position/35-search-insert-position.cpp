class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++)
       {
           if(target==nums[i]||nums.size()>0&&target<nums[i]&&(i==0||target>nums[i-1]))
               return i;
       }
       return nums.size();
    }
};