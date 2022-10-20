/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	242. Valid Anagram
/* Solution : 	 */

class Solution {
public:
    bool isAnagram(string s, string t) {
            
        unordered_map<char , int> mp;
        
        if ( s.size() != t.size()){
            
            return false;
        }
        
        for(int i = 0; i < s.size() ; i++){
            
            mp[s[i]]++;
        }
        
        for (int i = 0 ; i < t.size() ; i++){
            
            if (mp[t[i]] == 0){
                
                return false;
                
            }
            else{
                
                mp[t[i]]--;
            }
        }
        
        return true;
            
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}