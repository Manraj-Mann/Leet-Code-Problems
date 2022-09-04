/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

long long int reductionOperations(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    long long int ans = 0;
    long long int count = 0;

    for (long long int i = 0; i < nums.size(); i++)
    {
        ans += count;

        long long int j = i + 1;

        while (j < nums.size() && nums[i] == nums[j])
        {
            if (count != 0)
            {
                ans += count;
            }
            j++;
        }
        if (j != i + 1)
        {
            i = j - 1;
        }

        count++;
    }

    return ans;
}

int reductionOperations2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            count += nums.size() - i - 1;
        }
    }
    return count;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // long long int n;
    //      cin >> n;
    //     vector<int> nums(n);

    //     for (long long int i = 0; i < n; i++)
    //     {
    //         cin >>nums[i];
    //     }

    //     int ans1 = reductionOperations(nums);
    //     cout<<ans1<<endl;



    srand(time(0));

    while (1)
    {

        long long int n = rand() % 10000 + 1;
        // cin >> n;
        vector<int> nums(n);

        for (long long int i = 0; i < n; i++)
        {
            // cin >>
            nums[i] = rand() % 1000;
        }

        int ans1 = reductionOperations(nums);
        int ans2 = reductionOperations2(nums);

        cout << "mine = " << ans1 << " accepted = " << ans2 << endl;

        if (ans1 != ans2)
        {
            cout << n << endl;
            for (long long int i = 0; i < n; i++)
            {
                // cin >>
                cout << nums[i] << " ";
            }

            break;
        }
    }

    return 0;
}