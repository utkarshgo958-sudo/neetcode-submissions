class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1=s.size();int s2=t.size();
        int i1=0;int i2=0;
        while(i1<s1 && i2<s2){
            if(s[i1]==t[i2]){i1++;i2++;}
            else{i2++;}
        }
        if(i1==s1){return true;}else{return false;}
    }
};