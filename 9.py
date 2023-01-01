class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x = str(x)
        xr= x[::-1]
        if x == xr:
            return True
        else : 
            return False
