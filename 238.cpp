/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Product of Array Except Self
/* Solution : 	 Prefix and postfix */

class Solution
{

public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> ans(n, 1);

        int mul = 1;
        for (int i = 0; i < n - 1; i++)
        {
            mul *= nums[i];
            ans[i + 1] = mul;
        }

        mul = 1;
        for (int i = n - 1; i >= 1; i--)
        {
            mul *= nums[i];
            ans[i - 1] *= mul;
        }

        return ans;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}

// O(n) Solutions

//  vector<int> productExceptSelf(vector<int>& nums) {

//         vector<int> prefix  , postfix , ans;
//         int n = nums.size();

//         int mul = 1;
//         for (int i = 0; i < n; i++)
//         {
//             mul *= nums[i];
//             prefix.push_back(mul);

//         }

//         mul = 1;

//         postfix.resize(n);

//         for (int i = n-1; i >= 0; i--)
//         {
//             mul *= nums[i];
//             postfix[i] = mul;

//         }

//         for (int i = 0; i < n; i++)
//         {
//             int l  = 1, r = 1 ;
//             if( i != 0 ){

//                 l = prefix[i-1];
//             }

//             if(i != n-1){

//                 r = postfix[i+1];

//             }

//             ans.push_back( l * r);
//         }

//         return ans;

//     }