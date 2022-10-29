/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	191. Number of 1 Bits
/* Solution : 	 */
class Solution
{

public:
    int hammingWeight(uint32_t n)
    {
        
        int c = 0;
        int prev = n;
        while (n != 0)
        {
            prev = n;
            n = n >> 1;
            if (prev != n << 1)
            {

                c++;
            }
        }

        return c;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}