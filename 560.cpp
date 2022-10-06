/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 560. Subarray Sum Equals K
/* Solution : 	 */
class Solution
{


public:
    int subarraySum(vector<int> &nums, int k)
    {
        
        
        int prefixsum = 0 , ans = 0;
        unordered_map<int , int > mp;
        mp[prefixsum]++;
        int n = nums.size();
        
        for (int i = 0 ; i < n ; i++){
            
            
            prefixsum += nums[i];
            int need = prefixsum - k;
            ans += mp[need];
            mp[prefixsum]++;
            
            
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
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    Solution s;
    int k;
    cin >> k;
    cout << s.subarraySum(vec, k);

    return 0;
}