class Solution:
    def canJump(self, nums: List[int]) -> bool:

        cmax = nums[0]
        for i in range(0 , len(nums)-1):
            cmax = max(cmax-1 , nums[i])
            if cmax == 0:
                return False
        
        return True



       


        

        

       



