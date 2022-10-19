/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	13 Roman to int
/* Solution : 	 */
class Solution {
public:
    int romanToInt(string s) {
        
        map<char , int > prio;
        
        prio['I'] = 1;
        prio['V'] = 5;
        prio['X'] = 10;
        prio['L'] = 50;
        prio['C'] = 100;
        prio['D'] = 500;
        prio['M'] = 1000;
        int prev = 0;
        int sum = 0;
        for (int i = s.size()-1 ; i >= 0 ; i--){
            
            if (prio[s[i]] < prev){
                
                sum -= prio[s[i]];
            
            }
            else {
                
                sum += prio[s[i]];
            }
            
            prev = prio[s[i]];
        }
        
        
        return sum ;

    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}