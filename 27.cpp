/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	27
/* Solution : 	 */

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val){

                 j++;
            }
            else{

                nums[i-j] = nums[i];
            }
        }


        return nums.size()-j;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}