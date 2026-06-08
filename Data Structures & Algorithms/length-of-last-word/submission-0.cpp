class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;int lastcnt=0;
for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '){if(cnt!=0){lastcnt=cnt;}cnt=0;}
        else{cnt++;}
                }   
   return cnt==0?lastcnt:cnt;
    }
};