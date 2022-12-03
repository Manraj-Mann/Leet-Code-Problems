class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        sol = dict()
        for i in s1:
            sol[i] = sol.get(i , 0)+ 1
        print(sol)

        check = dict()
        j = 0 
        for i in range(0 , len(s2)) :

            check[s2[i]] = check.get(s2[i] , 0) + 1

            if len(s1) == (i - j + 1):
                print("equal" , i)
                print(check )
                if sol.keys() == check.keys():
                    suc = 1
                    for s in sol.keys():
                        if sol[s] != check[s]:
                            suc = 0
                            break

                    if suc == 1:
                        return True
                
                temp = check[s2[j]] - 1
                check.pop(s2[j])

                if temp != 0:
                    check[s2[j]] = check.get(s2[j] , temp)
                j += 1

                print(check)

            
        return False


            
    

if __name__ == "__main__":
    S = Solution()
    print(S.checkInclusion( "abcdxabcde", "abcdeabcdx"))

