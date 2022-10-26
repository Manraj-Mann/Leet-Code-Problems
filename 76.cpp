/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem :
/* Solution : 	 */

class Solution
{
public:
    string minWindow(string s, string t)
    {

        string ans = "";
        int min_len = INT_MAX , i = 0 , j = 0;
        unordered_map<char , int > mp , ans_mp;
        for (int i = 0; i < t.size(); i++)
        {
            ans_mp[t[i]]++;
        }
        
        while (i < s.size())
        {
            mp[s[i]]++;
            int suc = 1;
            for(auto ss : ans_mp){

                char c = ss.first;
                if ( mp[c] < ans_mp[c]){

                    suc = 0;
                    break;

                }
            }

            // cout<<"success = "<<suc<<endl;

            if ( suc == 1){

                int min_i = i, min_j=j;
                while (suc && j <= i)
                {
                    
                    mp[s[j]]--;
                    min_j = j;
                    j++;
                    if (mp[s[j-1]] < ans_mp[s[j-1]]){
                        suc = 0;
                        break;
                    }

                }

                // cout<<"i = "<<min_i<<"min j = "<<min_j<<endl;

                if ( min_len > ( min_i - min_j + 1)){

                    min_len = (min_i-min_j + 1);
                    ans = "";
                    for (int k = min_j; k <= min_i; k++)
                    {
                        ans += s[k];
                    }
                    
                }
                // cout<<"ans = "<<ans<<endl;
                
            }

            if ( j > i ){
                j = i;
            }
            
            // cout<<i<<" "<<j<<endl;

            i++;

            // cout<<"ans= "<<ans<<endl;
        }
        

        return ans;
    }
}

;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;

    Solution s;
    cout<<s.minWindow(a, b);

    return 0;
}