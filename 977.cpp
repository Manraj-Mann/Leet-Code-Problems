/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 977. Squares of a Sorted Array
class Solution { 

    public: 

    vector<int> sortedSquares(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0){

                nums[i] *= -1;
            }
        }
        

        sort(nums.begin() , nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
        
                nums[i] *= nums[i];
            
        }

        return nums;
        
    }


};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}