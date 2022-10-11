/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

// Problem : 	142. Linked List Cycle II
/* Solution : 	 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * }
 * ;
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        if (head == nullptr)
        {

            return nullptr;
        }
        ListNode *s = head, *f = head;

        ListNode *ret = nullptr;

        while (s != nullptr && f != nullptr && f->next != nullptr)
        {

            s = s->next;
            f = f->next->next;

            if (s == f)
            {

                cout << "cycle found\n";
                s = head;

                while (s != f)
                {

                    cout << "s = " << s->val << endl;
                    cout << "f = " << f->val << endl;
                    s = s->next;
                    f = f->next;
                }

                ret = s;
                break;
            }
        }

        return ret;
    }
};
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    return 0;
}