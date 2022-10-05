/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Insert Delete GetRandom O(1)
/* Solution : 	 */
class RandomizedSet
{
    int count = 0;
    map<int , bool> mp;
    vector<int> v;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if(mp[val]){

            return false;

        }
        else{

            mp[val] = true;
            v.push_back(val);
            count++;
            return true;
        }
    }

    bool remove(int val)
    {
        
        if(!mp[val]){

            return false;
        }
        else{

            int n = v[v.size()-1];
            for (int i = 0; i < count; i++)
            {
                if(v[i] == val){

                    v[i] = n;
                    v.pop_back();
                    break;
                }
            }
            
           mp[val] = false;
           count--;
           return true;
            
        }
    }

    int getRandom()
    {
        int n = rand()%count;
        return v[n];
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}