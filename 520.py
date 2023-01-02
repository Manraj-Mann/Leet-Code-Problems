class Solution(object):
    def detectCapitalUse(self, word):
        
        capcount = 0
        for w in word:
            if w.isupper():
                capcount += 1
        
        if capcount == len(word):
            return True
        if capcount == 0:
            return True
        if capcount == 1 and word[0].isupper():
            return True
        
        return False
                    





