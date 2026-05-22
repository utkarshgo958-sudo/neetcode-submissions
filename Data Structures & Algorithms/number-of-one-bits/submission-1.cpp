class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=31;
        int sum=0;
     while(i>=0) {
      sum+=(n>>i)&1;
      i--;}
      return sum;
    }
};
