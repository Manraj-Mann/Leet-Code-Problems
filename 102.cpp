/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	102. Binary Tree Level Order Traversal
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ansp;
        vector<TreeNode*> ans;
        queue<vector<TreeNode*>> q;
        
        if ( root != nullptr){
            
            ans.push_back(root);
            q.push(ans);
            ansp.push_back({root->val});
        }
        
        while ( !q.empty()){
            
            vector<TreeNode*> t = q.front();
            q.pop();
            vector<TreeNode *> v;
            vector<int>vp;
            for ( int i = 0 ; i < t.size() ; i++){
                
                if(t[i]->left != nullptr){
                    
                    v.push_back(t[i]->left);
                    vp.push_back(t[i]->left->val);
                }
                if(t[i]->right != nullptr){
                    
                    v.push_back(t[i]->right);
                    vp.push_back(t[i]->right->val);
                }
                
            }
            
            if (v.size()){
                
            
            q.push(v);
            ansp.push_back(vp);
            
            }
         
            
             
        }
        
        
        
        return ansp;
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}