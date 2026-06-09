class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        char carry='0';
        int ia=a.length()-1;int ib=b.length()-1;
        while(ia>=0 && ib>=0){
            if(a[ia]=='1' && b[ib]=='1'){
                if(carry=='0'){ans+='0';}
                 else{ans+='1';}
                carry='1';  
            }
            if(a[ia]=='0' && b[ib]=='0'){
                     ans+=carry;
                     carry='0';
            }
            if((a[ia]=='0' && b[ib]=='1')  || (a[ia]=='1' && b[ib]=='0')){
                   if(carry=='0'){ans+='1';carry='0';}
                   else{ans+='0';carry='1';}
            }
            ia--;ib--;
           
        }
        while(ia>=0){
            if(carry=='1' && a[ia]=='1'){
                    ans+='0';
            }
            else if(carry=='0' && a[ia]=='0'){
                        ans+='0';
            }
           else  if(carry=='0' && a[ia]=='1'){
                 ans+='1';
            }
           else if(carry=='1' && a[ia]=='0'){
                   ans+='1';carry='0';
            }
            ia--;
        }

        while(ib>=0){
            if(carry=='1' && b[ib]=='1'){
                    ans+='0';
            }
            else if(carry=='0' && b[ib]=='0'){
                        ans+='0';
            }
           else  if(carry=='0' && b[ib]=='1'){
                 ans+='1';
            }
           else if(carry=='1' && b[ib]=='0'){
                   ans+='1';carry='0';
            }
            ib--;
        }
if(carry=='1'){ans+='1';}
reverse(ans.begin(),ans.end());
return ans;
    }
};