/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	374. Guess Number Higher or Lower
/* Solution : 	Binary Search  */

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess (int n ){
    
}
class Solution {
public:
    int guessNumber(int n) {
        
        
        int i = 1 , j = n;
        
        while ( i <= j){
            
            int mid = i + (j-i)/2;
            
            if ( guess(mid) == 0){
                
                return mid;
            }
            else if ( guess(mid) == 1){
                
                i = mid+1;
                
            }
            else {
                
                j = mid -1;
            }
        }
        
        return -1;
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}