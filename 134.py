class Solution(object):
    
    def canCompleteCircuit(self , gas, cost):
        if sum(gas) < sum(cost):
            return -1

        cos = 0
        start = 0
        for i in range(len (gas)):
            cos += (gas[i] - cost[i])
            if cos < 0:
                cos = 0
                start = i + 1

        return start
