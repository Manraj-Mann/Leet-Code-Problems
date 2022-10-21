/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	128. Longest Consecutive Sequence
/* Solution : 	 */
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int longest = 0, l = 0;

        // -------------------------------- Sol 1 ------------------------------//
        // set<int> s;
        // for (int i = 0; i < nums.size(); i++)
        // {

        //     s.insert(nums[i]);
        // }

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     int val = nums[i];
        //     if (s.find(val - 1) == s.end())
        //     {

        //         l = 0;
        //         int j = 0;
        //         while (s.find(val + j) != s.end())
        //         {

        //             j++;
        //             l++;
        //         }

        //         longest = max(longest, l);
        //     }
        // }

        // ------------------------------------------- SOl 2 ------------------------//

        unordered_set<int> s(nums.begin() , nums.end());
        for (auto val : s)
        {
            if (s.find(val - 1) == s.end())
            {

                l = 0;
                int j = 0;
                while (s.find(val + j) != s.end())
                {

                    j++;
                    l++;
                }

                longest = max(longest, l);
            }
        }


        

        return longest;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Solution s;
    vector<int> k = {1 ,2, 3, 4};
    cout<<s.longestConsecutive(k);

    return 0;
}