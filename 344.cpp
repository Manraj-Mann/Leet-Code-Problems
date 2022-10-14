/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	344. Reverse String
/* Solution : 	 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i = 0;
        int j = s.size()-1;
        
        while (i <= j){
            
            
            swap(s[i] , s[j]);
            
            i++;
            j--;
        }
        
    }
};
  

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}