/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Find Pivot Index
/* Solution : 	 (My approach ): Calculate the sum from left adn then from right and check if any of them coincide
                ( correct (prefix sum )) : add and substract at same time 
*/
class Solution
{

public:
    int pivotIndex(vector<int> &nums)
    {

        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int st = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cout << "sum - " << st << " remaining - " << sum << endl;
            if (st == sum - nums[i])
            {

                return i;
            }
            st += nums[i];
            sum -= nums[i];
        }

        return -1;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}

// ------------------------------ My Solution ------------------------ //

//  int n = nums.size();
//         vector <int> inc;
//         inc.push_back(0);
//         cout<<endl;
//         for (int i = 0; i < n ; i++){

//             inc.push_back( nums[i] +inc[inc.size()-1] );
//         }

//          vector <int> dec;
//         dec.push_back(inc[inc.size()-1]);

//         for (int i = 0; i < n ; i++){

//             dec.push_back( dec[dec.size()-1]-nums[i] );
//         }

//         for(int i = 0 ; i <= n ; i++){

//             cout<<inc[i]<<" ";
//         }
//          cout<<endl;
//         for(int i = 0 ; i <= n ; i++){

//             cout<<dec[i]<<" ";
//         }

//         for (int i = 0 ,  j = 1; j <= n ; i++ , j++){

//             if(inc[j] == dec[i]){

//                 return i;
//             }

//         }

//         return -1;