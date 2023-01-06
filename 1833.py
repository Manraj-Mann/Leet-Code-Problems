class Solution(object):
    def maxIceCream(self, costs, coins):
        """
        :type costs: List[int]
        :type coins: int
        :rtype: int
        """
        costs = sorted(costs)
        i = 0
        n = len(costs)
        ans = 0
        while coins != 0 and i < n:

            if costs[i] <= coins:
                ans += 1
                coins -= costs[i]
            else:
                break

            i += 1

        return ans
