/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	235. LCA in BST
/* Solution : 	 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        
        if (root == nullptr){
            
            return nullptr;
        }
       
        if ( p->val < root->val && q->val < root->val ){
            
            return  lowestCommonAncestor(root->left , p , q);
        }
        else if (p->val > root->val && q->val > root->val){
            
            return lowestCommonAncestor(root->right , p , q);
        }
        else{
            
        return root;
            
        }
    }
};
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}