class Solution:
    def maximumBags(self, capacity: List[int], rocks: List[int], additionalRocks: int) -> int:
        ans =0
        capdiff = [ (i-j) for i , j in zip(capacity , rocks)]
        # print(type(capdiff[0]))
        capdiff.sort()
        for i in capdiff:
            if i <= additionalRocks:
                ans += 1
                additionalRocks -= i
            else:
                break
        
        return ans
            

            