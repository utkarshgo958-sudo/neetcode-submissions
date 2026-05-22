class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            res+=countpali(s,i,i);
            res+=countpali(s,i,i+1);
        }
return res;
    }
    private:
    int countpali(string s,int l,int r){
        int res=0;
        while(l>=0 && r<s.size()&&s[l]==s[r]){
            res++;l--;r++;
        }
           return res;
    }
};
