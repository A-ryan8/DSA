class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic={}
        for i in range(len(nums)):
            dic[nums[i]]=i
        for i in range(len(nums)):
            val=target-nums[i]
            if val in dic and i!=dic[val] :
                return [i,dic[val]]


        