/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	two Sum

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *newlist = new ListNode();
        ListNode *head = newlist;
        int remainder = 0;

        while (l1 != NULL || l1 != NULL || remainder > 0)
        {
            if (l1 != NULL)
            {

                remainder += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {

                remainder += l2->val;
                l2 = l2->next;
            }

            newlist->val = remainder % 10;
            remainder /= 10;

            if (remainder == 0 && l1 == NULL && l2 == NULL)
            {
                break;
            }
            else
            {
                ListNode *newnode = new ListNode();
                newlist->next = newnode;
            }

            newlist = newlist->next;
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