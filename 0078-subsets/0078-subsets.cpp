class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,vector<int>&vec,int i){
        if(i>=nums.size()){
            ans.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        solve(nums,vec,i+1);
        vec.pop_back();
        solve(nums,vec,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>vec;
        solve(nums,vec,0);
        return ans;
    }
};