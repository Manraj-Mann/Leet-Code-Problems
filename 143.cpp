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
    void reorderList(ListNode* head) {
        
        ListNode * s = head , *f = head;
        while(f != nullptr && f->next != nullptr){
            
            s = s->next;
            f = f->next->next;
        }
        stack<ListNode*> st;
        
        ListNode * ptr = s->next;
        s->next = nullptr;
        
        while(ptr != nullptr){
            
            st.push(ptr);
            ptr = ptr->next;
            
        }
        
        s = head;
        while(!st.empty()){
            
            ListNode * p = st.top();
            st.pop();
            p->next = s->next;
            s->next = p;
            s= p->next;
            cout<<p->val<<endl;
        }
        
        // cout<<s->val<<endl;
    }
};