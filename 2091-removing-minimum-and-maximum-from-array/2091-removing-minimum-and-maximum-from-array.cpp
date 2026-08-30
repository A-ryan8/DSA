class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int le=0;
        int gr=0;
        for(int i=0;i<n;i++){
            if(mini>nums[i]){
                mini=nums[i];
                le=i;
            }
            if(maxi<nums[i]){
                maxi=nums[i];
                gr=i;
            }
        }
        if(le>gr){
            swap(le,gr);
        }
        int c1=gr+1;
        int c2=n-le;
        int c3=le+n-gr+1;
        int ans=min(c3,min(c1,c2));
        return ans;

    }
};