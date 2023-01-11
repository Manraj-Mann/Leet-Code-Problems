class Solution:

    
    def minTime(self, n: int, edges: List[List[int]], hasApple: List[bool]) -> int:

        g = [[] for i in range(n)]

        for i in edges:
            g[i[0]].append(i[1])

        self.cost = 0
        def dfs( g , root , path , hasApple , ans , visited , cost):
            
            visited[root] = 1
            for i in range(0 , len(g[root])):

                path.append((root , g[root][i]))
                self.cost += 2
                if hasApple[g[root][i]]:
                    ans.append(list(path))
                    # print(ans)
                dfs(g , g[root][i] , path , hasApple , ans , visited , cost)

            path.pop()

            
        ans = []
        visited = [0 for i in range(n)]
        cost = 0
        for i in range(0 , n):
           
            path = [0]
            if visited[i] != 1:
                cost += self.cost
                self.cost = 0
                dfs( g , i , path , hasApple , ans ,visited ,  cost)
                print(visited)
                s = set()
                for p in ans:
                    for i in range(1 , len(p)):
                        s.add(p[i])

                print(set)

                fasn = 0
                for k in s:
                    fasn += 2

                cost += fasn
                
        
        return cost