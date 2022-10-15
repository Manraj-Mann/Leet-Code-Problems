/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	101. Symmetric Tree
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
    
    
    bool tree_search ( TreeNode * lt , TreeNode * rt){
        
        if ( lt == nullptr && rt == nullptr){
            
            return true;
        }
        if ( lt == nullptr || rt == nullptr){
            
            return false;
        }
        if ( lt->val != rt->val ){
            
            return false;
        }
        
        return (tree_search(lt->left , rt->right) && tree_search(lt->right , rt->left));
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
        return tree_search(root->left , root->right);
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}