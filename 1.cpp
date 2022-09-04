/*Author : Manraj Singh */

// Problem - Two sum
#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &nums, int target)
{

    vector<int> ans;

    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        if (m[target - nums[i]] == 0)
        {
            m[nums[i]] = i+1;
        }
        else
        {
           
            ans.push_back(m[target - nums[i]] - 1);
            ans.push_back(i);
            break;
        }

        // cout<<"\n-------------------\n";
        // for (auto p : m)
        // {
        //     cout<<(p.first)<<"-> "<<p.second<<" , ";
        // }
        // cout<<"\n-------------------\n";
        
    }

    return ans;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;

    vector<int> v = twosum(a, target);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}