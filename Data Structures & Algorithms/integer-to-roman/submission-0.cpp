class Solution {
public:
    string intToRoman(int num) {
//1 2 3 4 5 6 7 8 9 
int numm=num;
unordered_map<int,string>map;
map[1]="I"; map[2]="II"; map[3]="III"; map[4]="IV"; map[5]="V"; map[6]="VI"; map[7]="VII"; map[8]="VIII"; map[9]="IX";

map[10]="X"; map[20]="XX"; map[30]="XXX"; map[40]="XL"; map[50]="L"; map[60]="LX"; map[70]="LXX"; map[80]="LXXX"; map[90]="XC"; map[100]="C";

map[200]="CC"; map[300]="CCC"; map[400]="CD"; map[500]="D"; map[600]="DC"; map[700]="DCC"; map[800]="DCCC"; map[900]="CM"; map[1000]="M";

map[2000]="MM";
map[3000]="MMM";
int multiplier=1;
while(numm/10){numm=numm/10;multiplier*=10;}
string ans="";
while(num){
int ele=num/multiplier;
ele=ele*multiplier;
ans+=map[ele];
num=num%multiplier;multiplier/=10;
}
return ans;
    }
};