/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	1385. Find the Distance Value Between Two Arrays
/* Solution : 	 */

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort ( arr2.begin() , arr2.end());
        int ans = 0;
        int n = arr1.size();
        
        for (int k = 0 ; k < n ; k++){
            
            int i = 0 , j = arr2.size() - 1 ;
            bool flag = 0;
            while( i <= j ){
                
                int mid = (i + j)/2;
                
                if (abs(arr1[k] - arr2[mid]) <= d){
                    
                    flag = 1;
                    break;
                }
                else if ( arr2[mid] < arr1[k]){
                    
                    i = mid + 1;
                }
                else{
                    
                    j = mid - 1;
                }
            }
            if ( flag == 0){
                
                ans++;
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