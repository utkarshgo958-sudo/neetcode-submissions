class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack <int> stack;
int a;
int b;
    for(const string& c:tokens){

        if(c=="+"){
        a=stack.top();stack.pop();
        b=stack.top();stack.pop();
stack.push(a+b);
        }
        else if(c=="-"){
    a=stack.top();stack.pop();
    b=stack.top();stack.pop();
    stack.push(b-a);
        }
        else if(c=="/"){
          a=stack.top();stack.pop();
    b=stack.top();stack.pop();
    stack.push(b/a);
        }
        else if(c=="*"){
          a=stack.top();stack.pop();
    b=stack.top();stack.pop();
    stack.push(a*b);
        }
        else{
            stack.push(stoi(c));
        }
    }
    return stack.top();
    }
};
