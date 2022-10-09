/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	974. Subarray Sums Divisible by K
/* Solution : 	 Mathematics + prefixsum */
class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {

        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> mp;
        int prefix = 0;
        mp[prefix]++;

        for (int i = 0; i < n; i++)
        {
            prefix += nums[i];
            int need = (prefix % k);
            if ( need < 0){

                need += k;
            }
            ans += mp[need];
            mp[need]++;
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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;

    Solution s;
    cout << s.subarraysDivByK(v, k);

    return 0;
}

// [-7,2,3,0,-9]
// 3