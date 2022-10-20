/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	49. Group Anagrams
/* Solution : 	 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector < vector<string > > ans;
        map<vector<int> , vector<string>> mp;
        
        for ( int i = 0; i < strs.size() ; i++){
            
            vector<int> m ( 26 , 0);
            for ( int j = 0; j < strs[i].size() ; j++){
                
                m[(strs[i][j]-'a')]++;
            }
            
            
            mp[m].push_back(strs[i]);
            
        }
        
        for(auto k : mp){
            
            ans.push_back(k.second);
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