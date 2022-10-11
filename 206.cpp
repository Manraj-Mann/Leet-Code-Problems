/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	206. Reverse Linked List
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if ( head == nullptr){
            
            return head;
        }
        ListNode * ptr  = head;
        if( ptr->next == nullptr || ptr == nullptr){
            
            return ptr;
        }
        
        ListNode * ptr2  = head->next;
        head = ptr;
        
        while(ptr2 != nullptr){
            
            
            ListNode * temp = ptr2->next;
            ptr2->next = ptr;
            ptr = ptr2;
            ptr2 = temp;
            
            
        }
        
        head->next = nullptr;
        
       
        return ptr;
        
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}