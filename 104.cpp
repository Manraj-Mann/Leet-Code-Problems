/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 104. Maximum Depth of Binary Tree
/* Solution : 	 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int height (TreeNode * t){
        
        
        if (t == nullptr){
            
            return 0;
        }
        
        return 1 + max ( height(t->left) , height(t->right));
        
        
        
    }
    int maxDepth(TreeNode* root) {
        
       return height(root);
      
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}