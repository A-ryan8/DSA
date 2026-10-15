class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            map<int,int>mp;
            int c=0;
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                if(mp[nums[j]]<2){
                    c++;
                }
                ans+=c*c;
            }
        }
        return ans;
    }
};