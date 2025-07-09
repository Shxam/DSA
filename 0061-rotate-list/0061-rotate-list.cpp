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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||k==0) return head;
        int len=1;
        ListNode* curr=head;
        while(curr->next)
        {
            curr=curr->next;
            len++;
        }
        //making the list circular
        curr->next=head;
        k=k%len;
        int skip=len-k;
        ListNode* newTail=head;
        for(int i=1;i<skip;i++)
        {
            newTail=newTail->next;
        }
        
        ListNode* newHead=newTail->next;
        newTail->next=nullptr;
        return newHead;
    }
};