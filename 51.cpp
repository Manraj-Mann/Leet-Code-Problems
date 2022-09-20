/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	N-Queens
class Solution
{

public:
    vector<vector<string>> ans;
    vector<int> x;

    void push_sol()
    {

        vector<string> ansss;

        for (int i = 1; i < x.size(); i++)
        {
            string s;
            for (int j = 1; j < x.size(); j++)
            {
                if (j == x[i])
                {
                    s.push_back('Q');
                }
                else
                {

                    s.push_back('.');
                }
            }

            ansss.push_back(s);


        }

        ans.push_back(ansss);
    }
    bool place(int i, int k)
    {

        for (int j = 1; j < k; j++)
        {

            if ((x[j] == i) || (abs(x[j] - i) == abs(j - k)))
            {

                return false;
            }
        }

        return true;
    }
    void nqueens( int k, int n)
    {

        for (int i = 1; i <= n; i++)
        {
            if (place(i, k))
            {

                x[k] = i;

                if (k == n)
                {
                    push_sol();
                }
                else
                {
                    nqueens(k + 1, n);
                }
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        x.resize(n+1 , 0);
        nqueens(1  , n);
        return ans;
    }
};
void print(vector<vector<string>> &ans){

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
            cout<<endl;
        }

        cout<<"--------------------\n";
    }
    
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    Solution s;

    vector<vector<string>> ans = s.solveNQueens(n);
    print(ans);
    
    return 0;
}