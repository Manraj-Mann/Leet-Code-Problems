/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	Remove Duplicates from Sorted Array
/* Solution :   Simple 2 pointer approach	 */
class Solution { 

    public: 

    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        int i = 0;
        int j = 0;
        while(i < n && j < n){
            
            while( j < n && nums[i] == nums[j]){
                
                j++;
                
                
            }
            
            i++;
            
            if ( j < n && i < n){
                
                 nums[i]  = nums[j];
            }
            
           
        }
        
        int k = i;
        
        return k;
        
    }




};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}