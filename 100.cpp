/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	100. Same Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if ( (p == nullptr && q == nullptr)){
            
            return 1;
        }
        if ((p == nullptr || q == nullptr)){
            
            return 0;
        }
        
        return ((p->val == q->val) && isSameTree ( p->left , q->left) && isSameTree(p->right , q->right));
        
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}