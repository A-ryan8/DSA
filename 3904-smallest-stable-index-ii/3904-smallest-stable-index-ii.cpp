class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int n=nums.size();
        int mini=INT_MAX;
        vector<int>p;
        vector<int>s(n);
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            p.push_back(maxi);

        }
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            s[i]=mini;
                    }
        int mind=INT_MAX;
        int ans=-1;
        for(int i=0;i<n;i++){
            int diff=p[i]-s[i];
            if(diff<=k){
                return i;
            }
        }
        return ans;
    }
};