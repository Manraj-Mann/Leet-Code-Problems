/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	424. Longest Repeating Character Replacement
/* Solution : 	 */
class Solution
{
public:
    int characterReplacement(string s, int k)
    {

        queue<char> q;
        int ans = 0, i = 0;
        unordered_map<char, int> mp;
        int maxf = 0;

        while (i < s.size())
        {

            q.push(s[i]);
            mp[s[i]]++;
            maxf = max(mp[s[i]], maxf);

            while (q.size() - maxf > k)
            {
                mp[q.front()]--;
                q.pop();
            }
            // cout<<"qsize = "<<q.size()<<endl;
            ans = max(int(q.size()), ans);
            i++;

        }

        return ans;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Solution s;
    string l;
    int k;
    cin >> l >> k;
    cout << s.characterReplacement(l, k);

    return 0;
}