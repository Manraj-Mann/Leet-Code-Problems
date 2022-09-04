/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	278. First Bad Version
class Solution
{

public:
    int bad = 2;

    bool isBadVersion(int version)
    {

        if (bad <= version)
        {

            return true;
        }
        return false;
    }

    int firstBadVersion(int n)
    {
        int left = 1, right = n;
       

        while (left <= right)
        {
            int mid = (right - left) / 2 + left;
            if (isBadVersion(mid))
            {
                
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Solution s;
    cout << s.firstBadVersion(3);

    return 0;
}