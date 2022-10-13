/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	350. Intersection of Two Arrays II
/* Solution : 	Hashtable */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int , int > mp1;
        
        for (int i = 0 ; i < nums1.size() ; i++){
            
            mp1[nums1[i]]++;
        }
        vector<int> ans;
        for (int i = 0 ; i < nums2.size() ; i++){
            
            if ( mp1[nums2[i]]){
                
                mp1[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
            
            
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