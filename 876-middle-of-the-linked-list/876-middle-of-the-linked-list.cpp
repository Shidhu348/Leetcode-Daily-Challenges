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
    ListNode* middleNode(ListNode* head) {
        ListNode* slowP = head;
        ListNode* fastP = head;
        if(head->next==NULL)
            return head;
        while(fastP!=NULL and fastP->next!=NULL)
        {
            fastP = fastP->next->next;
            slowP = slowP->next;
        }
        return slowP;
    }
};