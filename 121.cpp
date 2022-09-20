/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : Best Time to Buy and Sell Stock
/* Solution : Use two pointer approach to get the the max difference 
             if the difference is negative move the right and left else only right */
           
class Solution
{

public:
    int maxProfit(vector<int> &prices)
    {

        int left = 0;
        int right = 1;
        int n = prices.size();
        int max_val = INT_MIN;

        while (left < right && right < n)
        {
            if (prices[left] < prices[right])
            {

                max_val = max(max_val, (prices[right] - prices[left]));
                right++;
            }
            else
            {

                left++;
                if (right == left)
                {

                    right++;
                }
            }
        }

        if(max_val < 0){

            return 0;
        }
        else{

            return max_val;
        }
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    Solution s;
    cout << s.maxProfit(vec);

    return 0;
}

// Solution TLE

// int n = prices.size( );
//         int max = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 if(max < (prices[j] - prices[i])){

//                     max = prices[j]-prices[i];
//                 }

//             }

//         }

//         if(max < 0){

//             return 0;
//         }
//         else{

//             return max;
//         }
