class Solution {
    public int findMaxLength(int[] nums) {
        Map<Integer,Integer> f = new HashMap<>();
        int one = 0 ;
        int zero = 0;
        int res = 0;
        for(int i = 0; i<nums.length;i++){
            if(nums[i]==0){
                zero++;
            }else{
                one++;
            }
            int diff = zero-one;
            if(diff==0){
                res=Math.max(res,i+1);
            }
            if(f.containsKey(diff)){
                int idx = f.get(diff);
                int len = i-idx;
                res = Math.max(res,len);
            }else{
                f.put(diff,i);
            }
            
        }
        return res;

    }
}