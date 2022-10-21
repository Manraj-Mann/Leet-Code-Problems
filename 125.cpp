/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	125. Valid Plaindrome
/* Solution : 	 */
class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0;
        int j = s.size()-1;
        while (i <= j)
        {
            while( ! ((48 <= s[i] &&  s[i] <= 57) || (65 <= s[i] &&  s[i] <= 90) || (97 <= s[i] &&  s[i] <= 122))  ){

                    i++;
                    cout<<"i++\n";
                    if ( i > j){

                        break;
                    }

            }
            while( ! ((48 <= s[j] &&  s[j] <= 57) || (65 <= s[j] &&  s[j] <= 90) || (97 <= s[j] &&  s[j] <= 122))  ){

                    j--;
                    cout<<"j--\n";
                    if ( i > j){

                        break;
                    }

            }
            
            if ( i > j){

                return true;
            }

            if ((65 <= s[i] &&  s[i] <= 90)){

                s[i] = s[i] + 32;
            }
            if ((65 <= s[j] &&  s[j] <= 90)){

                s[j] = s[j] + 32;
            }

            if ( s[i] != s[j]){

                return false;
            }

            i++;
            j--;
        
        }

        return true;
        
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Solution s;
    string s1;
    cin>>s1;
    cout<<s.isPalindrome(s1);

    

    return 0;
}