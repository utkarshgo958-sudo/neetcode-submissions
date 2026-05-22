class Solution {
public:
 int sumOfSquares(int n){
    int sumsq=0;
        while(n){
        int i=n%10;
        sumsq+=(i*i);
        n/=10;
        }
        return sumsq;
 }
    bool isHappy(int n) {
     unordered_set<int>visit;
    // set take O(log n) to find unord set O(1) 
    // n is not in the container visit
    //its coding equivalent is 
    //visit.find(n)==visit.end()
      while(visit.find(n)==visit.end())
      {
      visit.insert(n);
      n=sumOfSquares(n);
      if(n==1){return true;}
    }
      return false;
    }
};
