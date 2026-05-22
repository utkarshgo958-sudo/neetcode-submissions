class Solution {
public:
    int climbStairs(int n) {
    if(n==1){return 1;}
    if(n==0){return 0;}
      int p2=1;
      int p1=1;
      int curr;
      for(int i=2;i<n+1;i++) {
        curr=p2+p1;
        p2=p1;
        p1=curr;

      } 
      return curr;
    }
};
