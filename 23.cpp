/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem :
/* Solution : 	 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};class Solution
{
public:

    ListNode* merge(ListNode* list1, ListNode* list2) {

       if(list1 == nullptr){

            return list2;
        }
        if(list2 == nullptr){

            return list1;
        }

        ListNode * ptr = nullptr;

        if(list1->val <  list2->val){

            ptr = list1;
            list1 = list1->next;
        }
        else {

            ptr = list2;
            list2 = list2->next;
        }

        ListNode * cur = ptr;

        while (list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val){

                cur->next = list1;
                list1 = list1->next;
            }
            else{

                cur->next = list2;
                list2 = list2->next;
            }

            cur = cur->next;
            
        }

        if(list1 != nullptr){

            cur->next = list1;
        }
        if(list2 != nullptr){

            cur->next = list2;
        }

        return ptr;
    }
    
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        while (lists.size() > 1)
        {
            ListNode * l1 = lists.back();
            lists.pop_back();
            ListNode * l2 = lists.back();
            lists.pop_back();
            ListNode * newlist = merge(l1 , l2);
            lists.push_back(newlist);
        }
        if (lists.size() < 1){
            
            return nullptr;
        }
        return lists[0];
        
    }
};
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}