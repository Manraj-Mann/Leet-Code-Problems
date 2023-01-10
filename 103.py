# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:

        if root == None:
            return []

        ans = []
        queue = [root]
        vals = 0
        num = 1
        odd = 0
        while len(queue) != 0:
            new_num = 0
            add_list = []
            while(num != 0 ):
                node = queue[0]
                queue.pop(0)
                if node.left != None:
                    new_num += 1
                    queue.append(node.left)
                if node.right != None:
                    new_num += 1
                    queue.append(node.right)

                if odd == 0:
                    add_list.append(node.val)
                else:
                    add_list.insert(0 , node.val)
                
                num -= 1
            ans.append(add_list)
            if odd == 0:
                odd = 1
            else:
                odd = 0
                        
            num = new_num

        return ans


                        

            

            

