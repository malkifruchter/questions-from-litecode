#include <vector>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool helper=false;
        int i=digits.size()-1;
        while(helper==false&&i>=0)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                helper=true;
                for(int k=i+1;k<digits.size();k++)
                {
                     digits[k]=0;
                }
            }
            else i--;
        }
        if (helper==false)
        {
            int num=digits.size();
            digits.resize(num+1);
        digits[0]=1;
        for(int j=1;j<num+1;j++)
        {
            digits[j]=0;
        }
        }
        return digits;    
    }
};