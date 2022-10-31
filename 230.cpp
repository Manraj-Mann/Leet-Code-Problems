/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	230. Kth Smallest Element in a BST

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
    
    int n = 1 , ans = 0;
    int dfs(TreeNode * root  , int k){
        
        stack<TreeNode *> st;
        int i = 1;
    
      while(root != nullptr || !st.empty()){
          
         while(root != nullptr){
             
             
             st.push(root);
             root = root->left;
             
         }
          
         root = st.top();
         // cout<<root->val<<" i = "<<i<<endl;
          if ( i == k){
              
              return root->val;
              
          }
          i++;
         root = root->right;
         st.pop();
      }
            
       return root->val; 
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
       
        return  dfs(root , k);
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}