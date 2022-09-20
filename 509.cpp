/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	Fibonacci Number
/* Solution : 	 */
class Solution { 

    public: 
    int fib(int n) {
        
        if( n == 0){
            
            return 0;
        }
        
        vector<int> f(n + 1 , 0);
        
        f[1] = 1;
        
        for(int i = 2 ;  i <= n ; i++){
            
            f[i] = f[i-1] + f[i-2];
        }
        
        return f[n];
        
        
    }

};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}