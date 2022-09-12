class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        else if(s.size()==1)
            return 1;
        int count=0,max=-1,num=-1;
        bool same=false;
        for(int i=1;i<s.size();i++)
        {
            for(int j=i-1;j>num;j--)
            {
                if(s[i]==s[j])
                {
                    same=true;
                    num=j;
                }
            }
            if(i==s.size()-1)
            {
                if(i==s.size()-1&&!same)
                    count++;
                if(count>max)
                    max=count;
            }
            if(same)
            {
                if(i==s.size()-1&&!same)
                    count++;
                if(count>max)
                    max=count;
                count=0;
                same=false;
                i=num+1;
            }
            else count++;
        }
        return max+1;
    }
};