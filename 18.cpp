/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	18. 4Sum
/* Solution : 	Just used normal two pointer */
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        long long int i = 0, j, k, l, n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        while (i < n)
        {
            j = i + 1;

            while (j < k)
            {
                k = j + 1;
                l = n - 1;

                while (k < l)
                {
                    long long int sum = 0;
                    sum += nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    // cout<<"Sum = "<<sum<<endl;
                    if (sum == target)
                    {

                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        // printf("%d %d %d %d\n" , nums[i], nums[j], nums[k], nums[l]);
                        while (k + 1 < l && nums[k] == nums[k + 1])
                        {
                            k++;
                        }
                        k++;
                    }
                    else if (sum < target)
                    {

                        k++;
                    }
                    else
                    {

                        l--;
                    }
                }

                while (j + 1 < k && nums[j] == nums[j + 1])
                {
                    j++;
                }

                j++;
            }

            while (i + 1 < n && nums[i] == nums[i + 1])
            {
                i++;
            }

            i++;
        }

        return ans;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);

    int n;
    cin >> n;
    vector<int> v;

    while (n--)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    Solution s;

    int target;
    cin >> target;
    s.fourSum(v, target);

    return 0;
}