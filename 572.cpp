/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	https://leetcode.com/problems/subtree-of-another-tree/
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
 *
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
    // bool issame(TreeNode* root, TreeNode* subRoot){

    //     if (root == nullptr && subRoot == nullptr){

    //         return true;
    //     }
    //     if (root == nullptr || subRoot == nullptr ){

    //         return false;
    //     }
    //     return ((root->val == subRoot->val) && issame(root->left , subRoot->left) && issame(root->right , subRoot->right) );

    // }

    // bool isSubtree(TreeNode* root, TreeNode* subRoot) {

    //     if ( root == nullptr && subRoot == nullptr){

    //         return true;
    //     }
    //     else if (root == nullptr){

    //         return false;
    //     }

    //     stack<TreeNode * > s;
    //     s.push(root);
    //     bool ans = false;
    //     while(!s.empty()){

    //         TreeNode * t = s.top();
    //         s.pop();
    //         if (t->val == subRoot->val){

    //             if (issame(t , subRoot)){

    //                 ans = true;
    //                 break;
    //             }
    //             else{

    //                 ans = false;
    //             }

    //         }
    //         cout<<t->val<<" ";
    //         if (t->left != nullptr){

    //             s.push(t->left);
    //         }
    //         if (t->right != nullptr){

    //             s.push(t->right);
    //         }

    //     }

    //     return ans;

    // }

    bool issame(TreeNode *root, TreeNode *subRoot)
    {

        if (root == nullptr && subRoot == nullptr)
        {

            return true;
        }
        if (root == nullptr || subRoot == nullptr)
        {

            return false;
        }

        return root->val == subRoot->val && issame(root->left, subRoot->left) && issame(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {

        if (root == nullptr)
        {

            return false;
        }
        if (issame(root, subRoot))
        {

            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}