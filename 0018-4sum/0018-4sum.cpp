class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int le=j+1;
                int ri=n-1;
                while(le<ri && le<n){
                    long long sum=(long long)nums[i]+nums[j]+nums[le]+nums[ri];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[le],nums[ri]});
                        le++;
                        ri--;
                    }
                    if(sum<target){
                        le++;
                    }
                    if(sum>target){
                        ri--;
                    }
                }
            }
        }
        set<vector<int>>s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
        vector<vector<int>>vec;
        vec.assign(s.begin(),s.end());
        return vec;
    }
};