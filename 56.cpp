/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Merge Intervals
/* Solution :   Sort the points according to start time and check overlapping points 
 */
class Solution
{

public:
    static bool func(vector<int> &a, vector<int> &b)
    {

        if (a[0] < b[0])
        {
            

            return true;
        }
        else if(a[0] == b[0]){

            if(a[1] < b[1]){

                return true;
            }
        }

        return false;
    }

    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        int n = intervals.size();
        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end(), func);

        int st = 0, end = 0;

        for (int i = 0; i < n; i++)
        {
            st = i;
            int j = i + 1;
            int max_ = intervals[st][1];

            while (j < n && max_ >= intervals[j][0])
            {
                max_ = max(max_ , intervals[j][1]);
                j++;
            }
            end = j - 1;
            i = j - 1;
           

            ans.push_back({intervals[st][0], max_});
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
    vector<vector<int>> p;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        p.push_back({u, v});
    }
    Solution s;
    vector<vector<int>> ans = s.merge(p);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "( ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << " ) ";
    }

    return 0;
}