/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	98. Validate Binary Search Tree
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



struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &v)
    {

        if (root == nullptr)
        {

            return;
        }

        preorder(root->left, v);
        cout << root->val << " ";
        v.push_back(root->val);
        preorder(root->right, v);
    }
    bool isValidBST(TreeNode *root)
    {

        bool ans = true;
        vector<int> pre;

        if (root == nullptr)
        {

            return ans;
        }
        else
        {

            preorder(root, pre);
            for (int i = 1; i < pre.size(); i++)
            {

                if (pre[i] <= pre[i - 1])
                {

                    ans = false;
                    break;
                }
            }
        }

        return ans;
    }
};

// Solution 2 : 


// ------------- Better one ------------------//

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
// class Solution {
// public:
    
//     bool checkbst(TreeNode * t , long long int left , long long int right){
        
//         if ( t == nullptr){
            
//             return true;
//         }
        
//         if ( ! (left < t->val && t->val < right)){
//             return false;
//         }
        
//         return  checkbst(t->left , left , t->val) && checkbst(t->right , t->val , right);
        
//     }
//     bool isValidBST(TreeNode* root) {
        
//         return checkbst(root , LONG_MIN , LONG_MAX);
//     }
// };
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}