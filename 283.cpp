/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	Move Zeroes
/* Solution : 

    First Thought : Use two pointer swap - WORKED

    time = O(n)
    space = O(1)

	 */
class Solution { 

    public: 

    void moveZeroes(vector<int>& nums) {


        int n = nums.size();
        int zero = 0;
        int nonzero = 0;


        while (zero < n && nonzero <n)
        {
           while (zero < n && nums[zero] != 0)
           {
                zero++;
           }
            nonzero = zero;
           while (nonzero < n && nums[nonzero] == 0)
           {
                nonzero++ ;
           }

           if(nonzero < n && zero < n){

               swap(nums[zero] , nums[nonzero]);
                zero++;
                nonzero = zero ;


           }
           
           
           
        }
        
        
    }


};


void print(vector<int> &v){

    for(auto val : v){

        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n ;
    cin>>n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    Solution s;
    s.moveZeroes(v);

    print(v);
    

    

    return 0;
}