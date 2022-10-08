/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	205. Isomorphic Strings
/* Solution : 	Hashtable */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
        bool ans = true;
        
        unordered_map<char , char > mp1;
        unordered_map<char , char > mp2;
        
        int n = s.size()- 1;
        
        while(n != -1){
            
            if(mp1[s[n]] == '\0' && mp2[t[n]] == '\0'){
                
                mp1[s[n]] = t[n];
                mp2[t[n]] = s[n];
            }
            else if (mp1[s[n]] != t[n] || mp2[t[n]] != s[n]){
                
                
                
                ans = false;
                break;
            }
            
            cout<<"s = "<<s[n]<<" t = "<<t[n]<<" n = "<<n<<endl;
            
            n--;
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