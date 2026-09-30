class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int n=s.size();
        int curr=0;
        int sum=0;
        int prev=0;
        for(int i=n-1;i>=0;i--){
            curr=mp[s[i]];
            if(curr<prev){
                sum-=curr;
            }else{
            sum+=curr;}
            prev=mp[s[i]];
        }
        return sum;
        
    }
};