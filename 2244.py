class Solution(object):
    def minimumRounds(self, tasks):
        """
        :type tasks: List[int]
        :rtype: int
        """
        n = len(tasks)
        ans = 0

        # counts = [ tasks.count(i) for i in set(tasks)]
        counts = dict()
        for t in tasks:
            val = counts.get(int(t) , 0) + 1
            counts[t] = val
        

        for count in counts.values():

            orgcount = count
            temp =  0
            temp += count//3
            count = count % 3
            
            if count == 0:
                ans += temp
            else:
                while(count % 2 != 0 and count + 3 <= orgcount ):
                    temp -= 1
                    count += 3
                
                if count % 2 != 0:
                    return -1
                else:
                    ans += temp
                    ans += count // 2

        return ans

