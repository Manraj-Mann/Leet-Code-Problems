/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	189. Rotate Array
class Solution
{

public:
    void print(vector<int> &v)
    {

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    void rotate(vector<int> &nums, int k)
    {
        if( k > nums.size()){

            k %= nums.size();
        }

        reverse(nums.begin(), nums.end());
        print(nums);
        reverse(nums.begin(), nums.begin() + k);
        print(nums);
        reverse(nums.begin() + k, nums.end());
        print(nums);
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
    vector<int> Nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Nums[i];
    }
    s.rotate(Nums , 3);

    return 0;
}