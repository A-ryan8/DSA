class Solution {
public:
    int maxDepth(string s) {
        int d=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='('){
                d++;
                ans=max(d,ans);
            }
            if(c==')'){
                d--;
            }
        }
        return ans;
    }
};