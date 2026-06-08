class Solution {
public:
    int strStr(string haystack, string needle) {
        int size=needle.size();int n=haystack.size();
        for(int i=0;i<=n-size;i++){
            if(haystack[i]!=needle[0]){continue;}
            if(haystack.substr(i,size)==needle){return i;}
        }
return -1;
    }
};