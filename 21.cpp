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

// Problem - Merging Two sorted lists

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void print(ListNode *l)
    {

        while (l != nullptr)
        {
            cout << l->val << " ";
            l = l->next;
        }
        cout << endl;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
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
};

int main()
{

    ListNode *list1 = nullptr;

    ListNode n1(1);
    ListNode n2(2);
    ListNode n3(4);
    // n1.next = &n2;
    // n2.next = &n3;

    list1 = &n2;

    ListNode *list2 = nullptr;

    ListNode n4(1);
    ListNode n5(3);
    ListNode n6(4);
    // n4.next = &n5;
    // n5.next = &n6;

    list2 = &n4;

    Solution s;
    ListNode *l = s.mergeTwoLists(list1, list2);
    s.print(l);

    return 0;
}



// Solution 1 = 1st attempt 

// ListNode *start = nullptr;
//         ListNode *other = nullptr;
//         ListNode *ptr = nullptr;
//         ListNode *prev = nullptr;

//         if (list1 == nullptr)
//         {

//             return list2;
//         }
//         else if (list2 == nullptr)
//         {

//             return list1;
//         }

//         else if (list1->val < list2->val)
//         {
//             start = list1;
//             other = list2;
//             ptr = list1;
//         }
//         else
//         {

//             start = list2;
//             other = list1;
//             ptr = list2;
//         }

//         while (other != nullptr && ptr->next != nullptr)
//         {
//             int val1 = other->val;
//             int val2 = ptr->next->val;
//             if (val1 < val2)
//             {
//                 ListNode *temp = ptr->next;
//                 ptr->next = other;
//                 other = other->next;
//                 ptr->next->next = temp;
//                 ptr = ptr->next;
//             }
//             else
//             {

//                 if (ptr->next->next == nullptr)
//                 {
//                     prev = ptr;
//                 }
//                 ptr = ptr->next;
//             }
//         }

//         if (other != nullptr)
//         {

//             // cout << "Inside if \n";

//             while (other != nullptr && ptr != nullptr)
//             {
//                 // cout << "Running while\n";
//                 int val1 = other->val;
//                 int val2 = ptr->val;
//                 if (val1 < val2)
//                 {
//                     prev->next = other;
//                     other = other->next;
//                     prev->next->next = ptr;
//                     prev = prev->next;
//                 }
//                 else
//                 {
//                     ptr = ptr->next;
//                 }
//             }

//             if (other != nullptr)
//             {

//                 if (prev != nullptr)
//                 {

//                     prev = prev->next;
//                     prev->next = other;
//                 }
//                 else
//                 {

//                     start->next = other;
//                 }
//             }
//         }

//         return start;
    