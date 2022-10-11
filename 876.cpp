/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	876. Middle of the Linked List
/* Solution : 	Tw0 pointer one slow and one fast */


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode * s = head , *f = head;
        
        while( f->next != nullptr ){
            
            s = s->next;
            f = f->next;
            
            if(f->next == nullptr){
                
                break;
            }
            f = f->next;
        }
        
        
        return s;
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}