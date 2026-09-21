class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& nums,int i){
        if(i>nums.size()){
            return ;
        }
        if(i==nums.size()){
        ans.push_back(nums);}
        for(int ind =i;ind<nums.size();ind++){
            swap(nums[i],nums[ind]);
            solve(nums,i+1);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        vector<vector<int>>res;
        set<vector<int>>s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
        res.assign(s.begin(),s.end());
       return res;
    }
};