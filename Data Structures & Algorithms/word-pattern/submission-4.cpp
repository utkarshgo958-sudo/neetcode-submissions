class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        set<string>d;

        int n=s.size();int r;
        vector<string>vs;int l=0;
        for(int i=0;i<n;i++){
            string sr="";
            for( r=i;r<n && s[r]!=' ';r++){
            sr+=s[r];
            }
            vs.push_back(sr);
            i=r;
        }
        if(pattern.size()!=vs.size()){return false;}
        set<char>st;
        int i1=0;
        while(i1<pattern.size()){
            if(d.find(vs[i1])!=d.end() && st.find(pattern[i1])==st.end()){return false;}
        if(st.find(pattern[i1])==st.end() ){
             mp[pattern[i1]]=vs[i1];st.insert(pattern[i1]);
             d.insert(vs[i1]);
        }
        
        else if(mp[pattern[i1]]!=vs[i1]  ){return false;}
        i1++;
        }
        return true;
    }
};