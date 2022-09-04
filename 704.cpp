/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 704. Binary Search
class Solution
{

public:
    int search(vector<int> &nums, int target)
    {
        int right = nums.size() - 1;
        int left = 0;

        while (left <= right)
        {
            int mid = (right - left) / 2 + left;
            if (nums[mid] == target)
            {

                return mid;
            }
            else if (nums[mid] > target)
            {

                right = mid;
            }
            else
            {
                left = mid;
            }
        }

        return -1;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}