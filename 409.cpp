/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	409. Longest Palindrome
/* Solution : 	 */

class Solution {
public:
    int longestPalindrome(string s) {
        
        int n = s.size();
        unordered_map<char , int > mp;
        for ( int i = 0 ; i < n ; i++ ){
            
            mp[s[i]]++;
        }
        
        int count = 0;
        int one = 0;
        for(auto i : mp){
            
            if ( i.second % 2 == 0){
                
                count += i.second;
            }
            if ( i.second % 2 == 1){
                
                
                if ( one == 1){
                    
                    count += i.second-1;
                    continue;
                }
                one++;
                count += i.second;
                
            }
        
            
        }
        
        return count;
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}