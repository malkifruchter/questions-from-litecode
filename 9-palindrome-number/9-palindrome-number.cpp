class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        vector<int>nums(10);
        int count=0;
        while(x!=0)
        {
            nums[count]=x%10;
            count++;
            x=x/10;
        }
        for(int i=0,j=count-1;i<count,j>i;i++,j--)
        {
            if(nums[i]!=nums[j])
                return false;
        }
        return true;
    }
};