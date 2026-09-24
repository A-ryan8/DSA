class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int s=0;
            int num=nums[i];
            while(num){
                s+=num%10;
                num=num/10;
            }
            if(i==s){
                return i;
            }

        }
        return -1;
    }
};