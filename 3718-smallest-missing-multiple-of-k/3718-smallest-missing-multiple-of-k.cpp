class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        for(int i=1;i<102;i++){
            int n=k*i;
            if(!mp.count(n)){
                return n;
            }
        }
        return -1;
    }
};