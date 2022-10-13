/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	167. Two Sum II - Input Array Is Sorted
/* Solution : 	Normal two pointer  */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i = 0;
        int n = numbers.size();
        int j = n-1;
        vector <int> ans ;
        
        while( i< j){
            
            
            int sum = numbers[i] + numbers[j];
            
            if ( sum == target){
                
                ans = {i+1 , j+1};
                break;
            }
            else if ( sum < target){
                
                i++;
            }
            else{
                
                j--;
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