class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){return false;}
        unordered_map<char,char>map1;
        set<char>mp;
        for(int i=0;i<s.length();i++){      
            
             if(map1.find(s[i])==map1.end() && mp.find(t[i])==mp.end()){
             map1[s[i]]=t[i];mp.insert(t[i]);
            }

            else if(t[i]!=map1[s[i]]){return false;}
            
        }
        return true;
    }
};