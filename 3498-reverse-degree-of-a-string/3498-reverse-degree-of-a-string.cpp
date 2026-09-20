class Solution {
public:
    int reverseDegree(string s) {
        vector<int>v(26);
        int c=26;
        for(int i=0;i<26;i++){
            v[i]=c;
            c--;
        }
        int sum;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            sum=sum+(v[ch-'a']*(i+1));
        }
        return sum;
    }
};