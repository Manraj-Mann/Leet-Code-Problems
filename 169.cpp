/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Majority element
/* Solution : 	 */
class Solution
{

public:
    int majorityElement(vector<int> &nums)
    {

        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {

            mp[nums[i]]++;
        }

        int max = INT_MIN;
        int val = 0;
        for (auto m : mp)
        {
            cout<<m.first<<" "<<m.second<<endl;
        }
        
        
        return val;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}