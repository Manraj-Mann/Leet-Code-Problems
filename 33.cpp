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

        int l = 0;
        int ans = -1;
        int r = nums.size() - 1;

        while (l <= r)
        {

            int mid = l + (r - l) / 2;
            // cout<<"l = "<<nums[l]<<" mid = "<<nums[mid]<<"r = "<<nums[r]<<endl;

            if (target == nums[mid])
            {

                ans = mid;
                break;
            }
            else if (nums[l] <= nums[mid]){

                if (nums[l] <= target && target < nums[mid]){

                    r = mid -1;
                }
                else if(nums[l] > target){

                    l = mid + 1;
                }
                else if (nums[mid] < target ){

                    l = mid + 1;
                }
            }
            else {

                if (nums[l] <= target || target < nums[mid]){

                    r = mid -1;
                }
                else{

                    l = mid + 1;
                    
                }

                

                // if(nums[l] <= target ){

                //     r = mid - 1;
                // }
                // else{

                //     l = mid + 1;
                // }
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
    cout << s.search(v, tar);

    return 0;
}


/*



*/ 