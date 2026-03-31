class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {   
            if(st.size()!=0 && ((st.top()=='[' && s[i]==']') || (st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}'))){
                st.pop();
            }
        else if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else{
            return false;
        }

        }
        if(st.size()==0){
 return true;
        }
        return false;
       
    }
};
