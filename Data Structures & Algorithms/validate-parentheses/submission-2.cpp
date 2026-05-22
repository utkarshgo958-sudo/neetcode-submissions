class Solution {
public:
bool matches(char a,char b){
    if(a=='['&&b==']'){return true;}
    else if(a=='{'&&b=='}'){return true;}
    else if(a=='('&&b==')'){return true;}
    else {return false;}
}
    bool isValid(string s) {
        int n=s.length();
        if(n%2==1){return false;}
        stack <char>ch;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(((c=='('||c=='{')||c=='[')){
                ch.push(c);
            }
           else if(!ch.empty()){
 if(!matches(ch.top(),c)){return false;}
else{ch.pop();}
        }
else {return false;}
        }
        if(!ch.empty()){return false;}
        return true;
    }
};
