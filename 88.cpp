/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	Merge Sorted arrays
/* Solution : 	 

    My Solution : Using a vector of size n+m to get sorted elements and in end replacing nums1 with it
    Complexity : time ( O(n+m) ) and space ( O(n + m ))

    Other Soltion : Using nums1 and using two pointer approcach from back
    Complexity : time ( O(n+m) ) and space ( O(1))


    */
class Solution { 

    public: 

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


        int i = m-1;
        int j = n-1;
        int k = n+m-1;

        while (i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j]){

                nums1[k] = nums1[i];
                i--;
            }
            else{

                nums1[k] = nums2[j];
                j--;

            }
            k--;
            
        }

        for ( ; j >= 0 ; j-- , k--)
        {
             nums1[k] = nums2[j];
        }

        for ( ; i >= 0 ; i-- , k--)
        {
             nums1[k] = nums1[i];
        }
        
        
    
        
    }


};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}



/*

    My Solution: 

     vector<int> news(n+m);
        int i = 0 , j = 0 , k = 0;

        while (i < m && j < n)
        {
            if(nums1[i] < nums2[j]){

                news[k] = nums1[i];
                i++;
            }
            else{

                news[k] = nums2[j];
                j++;
            }

            k++;
        }

        for (; i < m; i++ , k++)
        {
            news[k] = nums1[i];
        }
        
        for (; j < n; j++ , k++)
        {
            news[k] = nums2[j];
        }

        nums1 = news;


*/