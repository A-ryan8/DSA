class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int r=0;
        int prev=0;
        // in this left is greare than right
        for(int i=s.size()-1;i>=0;i--){
            int curr=m[s[i]];
            if(curr<prev){
                r-=curr;
            }else{
                r+=curr;
            }
            prev=curr;
        }
        return r;
    }
};