/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	347. Top K Frequent Elements
/* Solution : 	 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int , int > mp;
        vector<int> ans;
        for( int i = 0 ; i < nums.size() ; i++){
            
            mp[nums[i]]++;
        }
        
        vector<pair<int , int > > p;
        
        for ( auto i : mp){
            
            p.push_back({i.second , i.first});
        }
        
        sort(p.begin() , p.end());
        
        int j = p.size()- 1;
        for (int i = 0 ; i < k ; i++){
            
            ans.push_back(p[j].second);
            j--;
            
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