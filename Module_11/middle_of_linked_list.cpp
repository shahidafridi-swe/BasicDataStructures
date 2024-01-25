// https://leetcode.com/problems/middle-of-the-linked-list/



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
    int size(ListNode * head)
    {
        ListNode * tmp = head;
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt ++;
            tmp =tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int s = size(head);
        ListNode * tmp = head;
        for(int i = 0; i< s/2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};


// Another way ( Fast and Slow / Hare and Tortoise) approach

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};