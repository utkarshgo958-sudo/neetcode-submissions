class Solution {
public:
    bool sumcals(vector<int>& diff,int i,int n){
        int total=0;
        for(int j=i;j<n;j++){
            total+=diff[j];
            if (total<0){return false;}
        }
        for(int j=0;j<i;j++){
            total+=diff[j];
            if(total<0){return false;}
        }
        return true;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //sum of gas >= sum of total cost
        int n=gas.size();
        vector<int>diff(n,0);
        for(int i=0;i<n;i++){diff[i]=gas[i]-cost[i];}
        int total=0;
        for(int i=0;i<n;i++){
              if(sumcals(diff,i,n)){return i;}
        }
        return -1;
    }
};
