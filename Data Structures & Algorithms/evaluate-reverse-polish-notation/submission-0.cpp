class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> mystack;
        for(const string& c:tokens){
            if(c=="+"||c=="-"|| c=="*"|| c=="/"  ){
                int rhs=mystack.top();
                mystack.pop();
                  int lhs=mystack.top();
                mystack.pop();
            
            if(c=="+"){
                mystack.push(rhs+lhs);
            }
            else if(c=="-"){
                 mystack.push(lhs-rhs);
             }
             else if(c=="*"){
                mystack.push(lhs*rhs);
            }
             else  if(c=="/"){
                 mystack.push(lhs/rhs);
               }
            
            }
             else{
                mystack.push(stoi(c));
               }
        }
        return mystack.top();
    }
};
