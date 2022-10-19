/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	70. Climbing Stairs
/* Solution : 	 */

class Solution {
public:
    int climbStairs(int n) {
        
        
        int van = 1;
        int van_1 = 1;
        n = n-2;
        while(n-- >= 0){
            
            int cur = van + van_1;
            van = van_1;
            van_1 = cur;
        }
        
        
        return van_1;
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}