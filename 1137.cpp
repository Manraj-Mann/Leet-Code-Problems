/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	1137. N-th Tribonacci Number
/* Solution : 	 Dynamic Programming */

class Solution {
public:
    int tribonacci(int n) {
        
        if ( n == 0){
            
            return 0;
        }
        else if ( n == 1 || n == 2){
            
            return 1;
        }
        
        vector<int> t ( n + 1);
        t[0] = 0;
        t[1] = 1;
        t[2] = 1;
        
        for ( int i = 3 ; i <= n ; i++){
            
            t[i] = t[i-1] + t[i-2] + t[i-3];
            cout<<t[i-1]<<" "<<t[i-2]<<" "<<t[i-3]<<endl;
        }
        
        return t[n];
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}