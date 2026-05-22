class Solution {
public:
    bool isAnagram(string s, string t) {
    int sl=s.length();
   if(sl!=t.length()){return false;}     
   unordered_map<char,int>count1;
   unordered_map<char,int>count2;
  
   for(int i=0;i<sl;i++){
    count1[s[i]]++;
    count2[t[i]]++;
   }
   if (count1==count2)
       { return true;}
   return false;
    }
};
