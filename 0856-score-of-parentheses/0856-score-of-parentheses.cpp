class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int in=0;
        int sc=0;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                in=st.top();
                st.pop();
                if(in==0){
                    sc=1;
                }
                else{
                    sc=2*in;
                }
                st.top()+=sc;


            }
        }
        return st.top();
    }
};