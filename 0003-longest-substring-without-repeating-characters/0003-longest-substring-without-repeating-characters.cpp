class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int l=0;
        int maxl=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            mp[ch]++;
            while(mp[ch]>=2){
                mp[s[l]]--;
                l++;
            }
            int len=i-l+1;
            maxl=max(maxl,len);


        }
        return maxl;
    }
};