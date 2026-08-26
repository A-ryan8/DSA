class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int l=0;
        int c=0;
        int maxl=INT_MAX;
        string best="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                c++;
            }
            while(c==k){
                int len=i-l+1;
                string w=s.substr(l,len);
                
                if(len<maxl){
                    maxl=len;
                    best=w;
                    
                }
                else if(len==maxl && w<best){
                    best=w;
                }
                if(s[l]=='1'){
                    c--;
                }
                l++;
            }

        }
        return best;
    }
};