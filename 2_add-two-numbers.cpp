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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* ret = new ListNode();
        ListNode* retHead = ret;
        int flag = 0;

        while(l1 &&  l2)
        {
            retHead->next = new ListNode();
            retHead = retHead->next;
            int tmp_val = l1->val + l2->val + flag;
            if(tmp_val > 9)
            {
                tmp_val = tmp_val - 10;
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            retHead->val = tmp_val;
            l1=l1->next;
            l2=l2->next;
        }

        while(l1)
        {
            retHead->next = new ListNode();
            retHead = retHead->next;
            int tmp_val = l1->val + flag;
            if(tmp_val > 9)
            {
                tmp_val = tmp_val - 10;
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            retHead->val = tmp_val;
            l1=l1->next;

        }

        while(l2)
        {
            retHead->next = new ListNode();
            retHead = retHead->next;
            int tmp_val = l2->val + flag;
            if(tmp_val > 9)
            {
                tmp_val = tmp_val - 10;
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            retHead->val = tmp_val;
            l2=l2->next;
        }

        if(flag)
        {
            retHead->next = new ListNode();
            retHead = retHead->next;
            retHead->val = 1;
        }

        return ret->next;
    }
};