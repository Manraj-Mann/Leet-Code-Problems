/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	136. Single Number
/* Solution : 	 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int num = nums[0];
        
        for(int i = 1; i < nums.size() ; i++){
            
            num = num xor nums[i];
        }
        
        return num;
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}