class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                string n="";
                while(st.top()!='('){
                    n.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for (int j = 0; j < n.size(); j++) {
                    st.push(n[j]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string ans = "";

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};