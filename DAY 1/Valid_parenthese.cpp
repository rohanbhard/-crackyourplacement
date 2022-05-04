class Solution {
public:
    bool isValid(string s) {
        stack<char> num;
        for(int i =0;i < s.length(); i++)
        {
            if(num.empty()==true) 
                num.push(s[i]);
            
            else if ((s[i]==')' && num.top()=='(') || (s[i]=='}' && num.top()=='{') || ( s[i]==']' && num.top()=='['))
                num.pop();
            
            else 
                num.push(s[i]);
                       
        }
        
        if(num.empty()==true)
            return true;
        
        else 
            return false;
    }
};