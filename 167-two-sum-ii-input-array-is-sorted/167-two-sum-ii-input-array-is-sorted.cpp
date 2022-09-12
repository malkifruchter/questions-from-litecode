class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output(2);
        int i=0,j=numbers.size()-1;
        while(i<numbers.size()-1&&j>1)
        {
            int middle=i+(j-i)/2;
            if(numbers[i]+numbers[j]>target)
                j--;
            else if(numbers[i]+numbers[j]<target)
                i++;
            else if(numbers[i]+numbers[j]==target)
                break;
        }
        output[0]=i+1;
        output[1]=j+1;
        return output;
    }
};