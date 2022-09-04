/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 35. Search Insert Position
class Solution
{

public:
    int searchInsert(vector<int> &nums, int target)
    {

        int l = 0, r = nums.size() - 1;

        while (l <= r)
        {
            int mid = (r - l) / 2 + l;
            //cout<<"Mid = "<<mid<<"Val = "<<nums[mid]<<endl;

            if (nums[mid] < target)
            {
              //  cout<<"Moved l\n";
                l = mid + 1;
            }
            else
            {

               // cout<<"Moved r\n";
                r = mid - 1;
            }
        }

        //cout << "Mid = " << left << endl;

        return l;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Solution s;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int t;
    cin >> t;

    cout << s.searchInsert(nums, t) << endl;

    return 0;
}