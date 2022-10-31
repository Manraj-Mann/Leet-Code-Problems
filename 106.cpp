/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	160. Intersection of Two Linked Lists
/* Solution : 	 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
       ListNode * ptr = headA;
        ListNode * p = headB;
        
        
        while(ptr != p){
            
            if (ptr == nullptr){
                
                ptr = headA;
            }
            else{
                
                ptr = ptr->next;
            }
            
            if (p == nullptr){
                
                p = headB;
            }
            else{
                
                p = p->next;
            }
            
        }
        
        return ptr;
        
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        unordered_map<ListNode * , bool > mp;
        
        while(headA != nullptr){
            
            mp[headA] = 1;
            headA = headA->next;
        }
        
        while(headB != nullptr){
            
            if(mp[headB] == 1){
                
                return headB;
                break;
            }
            
            headB = headB->next;
        }
        
        return nullptr;
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}