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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode * f= head , *s = head;
        
        if(head->next == nullptr){
            
            return nullptr;
        }
        
        while(n>0){
            
            f = f->next;
            n--;
            
        }
        if(f == nullptr){
            
            return head->next;
        }
        while(f->next != nullptr){
            
            f = f->next;
            s = s->next;
            
        }
        
        s->next = s->next->next;
        
        return head;
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}