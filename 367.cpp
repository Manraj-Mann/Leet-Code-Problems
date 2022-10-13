/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	367. Valid Perfect Square
/* Solution : 	Binary Search */

class Solution {
public:
    bool isPerfectSquare(int num) {
        
       long long int  i = 1 , j = num , ans = 0;
        
        
        while ( i <= j){
            
            long long int mid = i + (j - i )/2;
            
            
            if ( mid * mid == num){
                
                ans = 1;
                break;
                
            }
            else if ( mid * mid < num){
                
                i = mid +1 ;
            }
            else {
                
                j = mid - 1;
            }
        }
        
        
        return ans;
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}