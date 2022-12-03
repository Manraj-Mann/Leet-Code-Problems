class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        # Bubble sort 
#         for i in range(len(nums)) : 
            
#             m = i
#             for k in range( i+1 ,len(nums)):
                
#                 if nums[m] > nums[k]:
#                     m = k
                    
#             nums[m] , nums[i] = nums[i] , nums[m]
        
        # count sort
        
#         count = dict()

#         for i in range(len(nums)):
            
#             count[nums[i]] = count.get(nums[i] , 0) + 1
            
#         nums.clear()
#         for i in sorted(count.keys()):
#             print(i , count[i])
#             while(count[i] != 0):
#                 nums.append(i)
#                 count[i] = count[i] - 1 
            
        # dutch flag solution
        
        zero , one , two = 0 , 0 , len(nums)-1
        
        while one <= two:
            
            if nums[one] == 0 : 
                
                nums[zero], nums[one] = nums[one] , nums[zero]
                zero += 1
                one += 1
                
            elif nums[one] == 2 : 
                
                nums[two] , nums[one] = nums[one] , nums[two]
                two -= 1

            else :
                one += 1
            
            
                
        return nums
        
        
        