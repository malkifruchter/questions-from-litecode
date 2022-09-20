class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>nums2(nums.size());
        if(nums.size()<=k)
            k=k%nums.size();
        /*
        if(nums.size()<=k&&k%2!=0&&nums.size()!=k)
        {
           for(int i=0;i<nums.size();i++)
               nums2[i]=nums[nums.size()-1-i];
             nums=nums2;
        }
        */
        if(nums.size()>1)
        {
        for(int i=0;i<nums.size();i++)
        {
            if(i<k)
            {
                nums2[i]=nums[nums.size()-k+i];
            }
            else
            {
                nums2[i]=nums[i-k];
            }  
        }
        nums=nums2;  
    }
        }
        
};