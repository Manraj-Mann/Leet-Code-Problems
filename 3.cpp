/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Longest substring
class Solution
{

private:
public:
    string s;
    int subs()
    {

        int ans = 0;

        deque<char> q;
        unordered_map<char, bool> m;

        int i = 0;
        
        while (i != s.size())
        {
           // cout<<"s[i]  = "<<s[i]<<endl;

            if (q.empty() || (s[i] != q.back() && m[s[i]] == 0))
            {

                m[s[i]] = 1;
                q.push_back(s[i]);
               // cout<<"pushed = "<<q.back()<<endl;
                int so = q.size();
                ans = max(ans, so);
            }
            else if ( m[s[i]] == 1)
            {
                while (m[s[i]] != 0 && !q.empty())
                {
                    m[q.front()] = 0;
                   // cout<<"Poped = "<<q.front()<<endl;
                    q.pop_front();
                }

                m[s[i]] = 1;
                q.push_back(s[i]);
               // cout<<"pushed = "<<q.back()<<endl;
                int so = q.size();
                ans = max(ans, so);
            }

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
    cin >> s.s;
    cout << s.subs();

    return 0;
}