class Solution(object):
    def minDeletionSize(self, strs):
        """
        :type strs: List[str]
        :rtype: int
        """
        st = []
        todel = 0
        for i in range(len(strs[0])):
            sr = ""
            for k in range(len(strs)-1):
                if strs[k][i] > strs[k+1][i]:
                    todel += 1
                    break

        return todel

