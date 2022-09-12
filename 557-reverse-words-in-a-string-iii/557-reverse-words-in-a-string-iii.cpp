class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        for(int k=0;k<s.size();k++)
        {
            if(s[k]==' '||k==s.size()-1)
            {
            for(int i=start,j=0;i<start+(k-start)/2+1;i++,j++)
            {
                if(k==s.size()-1)
                   swap(s[i],s[k-j]); 
                else if(i<start+(k-start)/2)
                swap(s[i],s[k-j-1]);
            }
                start=k+1;
            }
        }
        return s;
    }
};