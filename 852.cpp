/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 852. Peak Index in a Mountain Array	
/* Solution : 	Binary Search  */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0 , j = n-1;
        
        while( i < j){
            
            if ( nums[i] < nums[j]){
                
                i++;
            }
            else{
                
                j--;
            }
        }
        
        return i;
        
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}