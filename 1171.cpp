/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	Remove Zero Sum Consecutive Nodes from Linked List
/* Solution : 	 Normal n^2 solution
 */
class Solution
{

public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode *removeZeroSumSublists(ListNode *head)
    {
        ListNode *ptr = head;
        ListNode *p = head;
        ListNode *prev = head;

        while (p != nullptr)
        {
            ptr = p;
            int sum = 0;
            while (ptr != nullptr)
            {
                sum += ptr->val;
                ptr = ptr->next;
                
                if (sum == 0)
                {
                    if (p == head)
                    {
                        head = ptr;
                        p = head;
                        prev = ptr;
                    }
                    else
                    {

                        prev->next = ptr;
                        p = ptr;
                    }

                    break;
                }
            }

            if (sum != 0)
            {
                prev = p;
                p = p->next;
            }
        }

        return head;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}