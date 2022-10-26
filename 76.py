class Solution:
    def minWindow(self, s: str, t: str) -> str:

        mp = {}
        ans_mp = {}
        min_len = 1000000
        ans_string = ""
        for c in t:
            ans_mp[c] = 1 + ans_mp.get(c, 0)

        i = 0
        j = 0

        for c in s:
            mp[c] = 1 + mp.get(c, 0)
            suc = 1
            for k in ans_mp.keys():
                if mp.get(k, 0) < ans_mp.get(k, 0):
                    suc = 0
                    break
            if suc == 1:

                while j <= i and suc:

                    # can take this out to make efficient
                    if min_len > (i-j+1):
                        ans_string = ""
                        min_len = (i-j+1)
                        for k in range(j, i+1):
                            ans_string += s[k]

                    mp[s[j]] -= 1
                    j += 1

                    if mp.get(s[j-1], 0) < ans_mp.get(s[j-1], 0):
                        suc = 0
                        break

            i += 1

        return ans_string


if __name__ == '__main__':

    s = input()
    t = input()

    sol = Solution()
    print(sol.minWindow(s, t))
