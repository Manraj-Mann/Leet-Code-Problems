class Solution:
    def wordPattern(self, pattern , s):
        hmap = {}
        a = s.split(' ')
        b = list(pattern)
        if len(a)!=len(b):
            return False
        if len(set(a))!=len(set(b)): 
            return False
        for (i, c) in enumerate(list(pattern)):
            if c in hmap:
                if hmap[c]!=a[i]:
                    return False
            else:
                hmap[c] = a[i]
        return True