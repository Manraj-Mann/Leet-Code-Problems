/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : Pascal's Triangle
/* Solution : 	 */
class Solution { 

    public: 
     vector<vector<int>> generate(int numRows) {
        
        int n = numRows;
        vector<vector<int>> v (n , vector<int>());
        for (int i = 0 ; i < n ; i++){
            
            if(i == 0){
                
                v[i].push_back(1);
            }
            else{
                
                v[i].resize(v[i-1].size()+1 , 1);
               
            }
            
            for (int j = 1 ; j < v[i].size()-1 ; j++ ){
                
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
            
        }
        
        return v;
    }

};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}