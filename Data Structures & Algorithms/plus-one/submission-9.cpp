class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
int carry=1;
int f=0;
int n=digits.size();
int i=digits.size()-1;
        while(i>0){
            if(digits[i]+carry<=9){digits[i]++;i--;carry=0;
            break;}
            else {digits[i]=0;i--;carry=1;}
        }

    if(carry+digits[0]>9){f=1;digits[0]=0;}
    else{digits[0]+=carry;}
    vector<int>arr(n+1);
    if(f){
        arr[0]=f;
        for(int i=1;i<=digits.size();i++){
            arr[i]=digits[i-1];
        }
    }
    else{
        return digits;
    }
return arr;
    }
};
