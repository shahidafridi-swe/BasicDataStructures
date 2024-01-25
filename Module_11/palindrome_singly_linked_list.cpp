// https://leetcode.com/problems/palindrome-linked-list/


class Solution {
public:
    void insert_at_tail(ListNode * &head, ListNode * &tail, int val)
    {
        ListNode * newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void reverse(ListNode * &head, ListNode * cur)
    {
        if(cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
        return;

    }
      

    
    bool isPalindrome(ListNode* head) {
        ListNode * newHead = NULL;
        ListNode * newTail = NULL;
        ListNode * temp = head;
        while(temp != NULL)
        {
            insert_at_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reverse(newHead, newHead);

        temp = head;
        ListNode * temp2 = newHead;
        while(temp != NULL)
        {
            if(temp->val != temp2->val)
            {
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;

    }
};