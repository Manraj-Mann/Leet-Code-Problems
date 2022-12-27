class Solution:
    def numTilings(self, n: int) -> int:
        dp = [ 0 for i in range (n + 2)]
        if n <= 2:
            return n

        dp[0] = 1
        dp[1] = 1
        dp[2] = 2

        for i in range ( 3 , n + 1):
            dp[i] = (2 * dp[i-1] + dp[i-3]) % (1000000007)

        return dp[n]