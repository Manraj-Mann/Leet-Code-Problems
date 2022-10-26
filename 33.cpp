/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	33. Rotated binary search
/* Solution : 	 */

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int l = 0, r = nums.size() - 1;
        int ans = -1;
        while (l <= r)
        {

            cout << "l = " << l << " r = " << r << endl;
            int mid = (l+r)/2;
            cout << "mid = " << nums[mid] << endl;

            if (nums[mid] == target)
            {
                ans = mid;
                break;
            }
            else if (nums[l] <= target && target < nums[mid] ){

                r = mid-1;

            }
            else if (target <= nums[r] && target > nums[mid]){

                l = mid + 1;

            }
            
        
        }

       
        return ans;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<int> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    int tar = v[v.size() - 1];
    v.pop_back();
    Solution s;
    cout<<s.search(v, tar);

    return 0;
}