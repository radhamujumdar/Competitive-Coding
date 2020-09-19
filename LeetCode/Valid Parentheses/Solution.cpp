class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char c: s){
            if(c == '(' || c =='[' || c == '{'){
                stk.push(c);
            }
            else{
                if(stk.empty()){
                    return false;
                }
                char curr = stk.top();
                stk.pop();

                if(c == ')' && curr != '('){
                    return false;
                }
                else if(c == ']' && curr != '['){
                    return false;
                }
                else if(c == '}' && curr != '{'){
                    return false;
                }
            }
        }
        if(stk.empty())
            return true;
        return false;
    }
};
