/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 7. Reverse Integer
class Solution
{

public:
    int reverse(int x)
    {
        if(x == 0){

            return 0;

        }
        bool neg = 0;
        if (x < 0)
        {
            neg = 1;
            x *= -1;
        }
        string s;
        while (x != 0)
        {
        //    cout << x << endl;
            int num = x % 10;
            x /= 10;
            s.push_back(num + '0');
        //    / cout<<"pushed "<<s.back()<<endl;
        }
        int i = 0;
        string news;
        while (s[i] == 0)
        {
            i++;
        }

        while (i < s.size())
        {
            news.push_back(s[i]);
            i++;
        }

        int ans = stoll(news);
        if (neg)
        {
            ans *= -1;
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
    cout << s.reverse(1534236469) << endl;

    return 0;
}