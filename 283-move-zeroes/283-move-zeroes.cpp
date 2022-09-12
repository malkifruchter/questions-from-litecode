class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
      for(int i=0;i<nums.size()-count;i++)
      {
          if(nums[i]==0)
          {
              for(int j=i;j<nums.size()-1-count;j++)
              {
                  nums[j]=nums[j+1];
              }
              nums[nums.size()-1-count]=0;
              count++;
              i--;
          }
      }
    }
};