class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
       int num=x;int no=0;
      while(num)
        {
        int curr=num%10;
        no=no*10+curr;
        num/=10;}
if(no==x){return true;}
return false;
    }
};