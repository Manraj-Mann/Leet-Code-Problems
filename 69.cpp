/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	69. Sqrt(x)
/* Solution : 	 */


class Solution {
public:
    
    int mySqrt(int x) {
        
          long long i = 0 , j = x , ans = i;
        while (i <= j)
        {
            long long mid = (i+j) /2;
            // cout<<"mid = "<< mid<<endl;

            if ( (mid * mid) <= x){

                ans = mid;
                i = mid + 1;
            }
            else {

                j  = mid -1;
            }
        }

        return ans;
    }
     
};
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    Solution s;
    cout<<s.mySqrt(n)<<endl;

    

    return 0;
}