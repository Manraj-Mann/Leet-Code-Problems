/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	392. Is Subsequence
/* Solution : 	Two pointer + strings */
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0;
        int j = 0;
        
        while(i < s.size() && j < t.size()){
            
            
            if(s[i] == t[j]){
                
                i++;
            }
            j++;
        }
        
        if(i == s.size()){
            
            return true;
        }
        
        return false;
        
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}