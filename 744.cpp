/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	744. Find Smallest Letter Greater Than Target
/* Solution : 	 */

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int i = 0 , j = letters.size()-1;
        int ans = 0;
        while (i <= j)
        {
            int mid = (i + j)/2;
            
            if ( letters[mid] <= target){

                
                i = mid + 1;

            }
            else{

                ans = mid;
                j = mid - 1;
            }
        }

        return letters[ans];
        
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}