class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxl=INT_MIN;
        string ans="";
        for(int i=0;i<n;i++){
            int l=i;
            int r= i;
            int len=0;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
                
                
            }
            len=r-l-1;

            if(len>maxl){
                maxl=len;
                ans=s.substr(l+1,maxl);
            }
            l=i;
        
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
              
                
            }
            len=r-l-1;
            if(len>maxl){
                maxl=len;
                ans=s.substr(l+1,maxl);
            }


        }

        return ans;
    }
};