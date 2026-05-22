class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        int curr;
        int temp;
        for(int i=0;i<n;i++){
            curr=0;
            temp=temperatures[i];
            int j=i+1;

          while(j<n){
              if(temperatures[j]>temp){curr++;break;}
              else if(j==n-1){curr=0;}
              else{curr++;}
              j++;
          }
          ans[i]=curr;
        }
        return ans;
    }
};
