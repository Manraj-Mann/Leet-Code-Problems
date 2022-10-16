/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	108. Convert Sorted Array to Binary Search Tree
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
    
    void gen_tree(TreeNode * root , vector<int> &nums , int i , int mid , int j){
        
        
       if ( i <= mid - 1){
           
           int left_mid = ( i + (mid -1 ) ) /2;
           root->left = new TreeNode ( nums[left_mid]);
           gen_tree(root->left , nums , i , left_mid , mid-1);
           
           
       }
        if ( mid + 1 <= j){
            
            int right_mid = ( j + (mid + 1 ) ) /2;
           root->right = new TreeNode ( nums[right_mid]);
           gen_tree(root->right , nums , mid + 1 , right_mid , j);
            
            
        }
        
        
        
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        int mid = (0 + (n-1))/2;
        TreeNode * root = new TreeNode (nums[mid]);
        
        gen_tree(root ,nums , 0 , mid ,n-1 );
        
        return root;
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}