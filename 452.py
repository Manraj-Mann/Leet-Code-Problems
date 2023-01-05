class Solution(object):
    def findMinArrowShots(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        points = sorted(points)
        print(points)
        n = len(points)
        i = 0
        ans = 0
        while i < n :
            
            ans += 1
            over_x_min = points[i][0]
            over_x_max = points[i][1]
            overlapping = True
            j = i + 1
            while overlapping and j < n:
                x1 = points[j][0]
                x2 = points[j][1]
                if over_x_min <= x1 and x1 <= over_x_max:
                    overlapping = True
                    if over_x_min < x1 :
                        over_x_min = x1
                        if over_x_max > x2:
                            over_x_max = x2
                    j += 1
                else:
                    overlapping = False

            i = j

        return ans